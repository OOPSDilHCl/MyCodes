/* =========================================================
   LITTLE LEMON — script.js
   Shared across index.html, reservations.html, menu.html
   Each block checks for its elements before running, so one
   file can safely serve all three pages.
   ========================================================= */

document.addEventListener('DOMContentLoaded', () => {

  /* ---------------------------------------------------------
     1. MOBILE NAV TOGGLE (all pages)
     --------------------------------------------------------- */
  const navToggle = document.getElementById('navToggle');
  const mainNav = document.getElementById('mainNav');
  if (navToggle && mainNav) {
    navToggle.addEventListener('click', () => {
      const isOpen = mainNav.classList.toggle('is-open');
      navToggle.setAttribute('aria-expanded', String(isOpen));
    });
    // close menu when a link is tapped (mobile)
    mainNav.querySelectorAll('a').forEach(link => {
      link.addEventListener('click', () => {
        mainNav.classList.remove('is-open');
        navToggle.setAttribute('aria-expanded', 'false');
      });
    });
  }

  /* ---------------------------------------------------------
     2. REVEAL-ON-SCROLL (all pages)
     --------------------------------------------------------- */
  const revealTargets = document.querySelectorAll('.section-head, .dish-card, .loc-card, .menu-item, .form-card, .res-side .info-card');
  revealTargets.forEach(el => el.classList.add('reveal'));
  if ('IntersectionObserver' in window) {
    const revealObserver = new IntersectionObserver((entries) => {
      entries.forEach(entry => {
        if (entry.isIntersecting) {
          entry.target.classList.add('is-in');
          revealObserver.unobserve(entry.target);
        }
      });
    }, { threshold: 0.12 });
    revealTargets.forEach(el => revealObserver.observe(el));
  } else {
    revealTargets.forEach(el => el.classList.add('is-in'));
  }

  /* ---------------------------------------------------------
     3. LOCATION PICKER (index.html)
     --------------------------------------------------------- */
  const locationForm = document.getElementById('locationForm');
  if (locationForm) {
    const pickedLabel = document.getElementById('pickedLabel');
    const continueBtn = document.getElementById('continueBtn');
    const radios = locationForm.querySelectorAll('input[name="location"]');

    // restore a previous choice, if any
    const saved = localStorage.getItem('ll-location');
    if (saved) {
      const match = [...radios].find(r => r.value === saved);
      if (match) match.checked = true;
    }
    updatePicked();

    radios.forEach(radio => {
      radio.addEventListener('change', updatePicked);
    });

    function updatePicked() {
      const chosen = locationForm.querySelector('input[name="location"]:checked');
      if (chosen) {
        pickedLabel.innerHTML = `You've chosen <strong>${chosen.value}</strong> — ready when you are.`;
        continueBtn.disabled = false;
      } else {
        pickedLabel.textContent = 'No location selected yet.';
        continueBtn.disabled = true;
      }
    }

    locationForm.addEventListener('submit', (e) => {
      e.preventDefault();
      const chosen = locationForm.querySelector('input[name="location"]:checked');
      if (!chosen) return;
      localStorage.setItem('ll-location', chosen.value);
      window.location.href = `reservations.html?location=${encodeURIComponent(chosen.value)}`;
    });
  }

  /* ---------------------------------------------------------
     4. RESERVATION FORM (reservations.html)
     --------------------------------------------------------- */
  const reserveForm = document.getElementById('reserveForm');
  if (reserveForm) {
    // show which location we're booking, from URL param first, then storage
    const chosenLocationEl = document.getElementById('chosenLocation');
    const params = new URLSearchParams(window.location.search);
    const location = params.get('location') || localStorage.getItem('ll-location');
    if (chosenLocationEl) {
      chosenLocationEl.textContent = location || 'no location chosen — pick one on the home page';
    }

    // date input: block past dates
    const dateInput = document.getElementById('resDate');
    if (dateInput) {
      const today = new Date();
      const yyyy = today.getFullYear();
      const mm = String(today.getMonth() + 1).padStart(2, '0');
      const dd = String(today.getDate()).padStart(2, '0');
      dateInput.min = `${yyyy}-${mm}-${dd}`;
      // default to today so the calendar opens somewhere sensible
      if (!dateInput.value) dateInput.value = `${yyyy}-${mm}-${dd}`;
    }

    const formMsg = document.getElementById('formMsg');
    const confirmCard = document.getElementById('confirmCard');
    const confirmList = document.getElementById('confirmList');

    reserveForm.addEventListener('submit', (e) => {
      e.preventDefault();

      if (!reserveForm.checkValidity()) {
        reserveForm.reportValidity();
        formMsg.textContent = 'Please fill in every required field.';
        formMsg.classList.add('error');
        return;
      }
      formMsg.textContent = '';
      formMsg.classList.remove('error');

      const data = new FormData(reserveForm);
      const extras = data.getAll('extras');

      const rows = [
        ['Location', location || 'Not specified'],
        ['Name', data.get('fullName')],
        ['Date', formatDate(data.get('resDate'))],
        ['Time', data.get('resTime')],
        ['Guests', data.get('guests')],
        ['Occasion', data.get('occasion')],
        ['Seating', data.get('seating')],
        ['Extras', extras.length ? extras.join(', ') : 'None'],
      ];

      confirmList.innerHTML = rows.map(([label, val]) =>
        `<div><span>${label}</span><span>${escapeHtml(String(val))}</span></div>`
      ).join('');

      reserveForm.style.display = 'none';
      confirmCard.classList.add('is-visible');
      confirmCard.scrollIntoView({ behavior: 'smooth', block: 'start' });
    });

    function formatDate(iso) {
      if (!iso) return '—';
      const d = new Date(iso + 'T00:00:00');
      return d.toLocaleDateString(undefined, { weekday: 'long', year: 'numeric', month: 'long', day: 'numeric' });
    }
    function escapeHtml(str) {
      const div = document.createElement('div');
      div.textContent = str;
      return div.innerHTML;
    }
  }

  /* ---------------------------------------------------------
     5. MENU PAGE (menu.html)
     --------------------------------------------------------- */
  const menuToolbar = document.getElementById('menuToolbar');
  if (menuToolbar) {

    /* 5a. sticky shadow once toolbar reaches the top */
    const toolbarSentinelTop = menuToolbar.getBoundingClientRect().top + window.scrollY;
    window.addEventListener('scroll', () => {
      menuToolbar.classList.toggle('is-stuck', window.scrollY > toolbarSentinelTop - 4);
    }, { passive: true });

    /* 5b. scroll-spy: highlight active jump link as sections pass */
    const jumpLinks = document.querySelectorAll('.menu-jump a');
    const sections = [...jumpLinks].map(link => document.getElementById(link.dataset.section)).filter(Boolean);

    if ('IntersectionObserver' in window && sections.length) {
      const spy = new IntersectionObserver((entries) => {
        entries.forEach(entry => {
          const link = document.querySelector(`.menu-jump a[data-section="${entry.target.id}"]`);
          if (!link) return;
          if (entry.isIntersecting) {
            jumpLinks.forEach(l => l.classList.remove('is-active'));
            link.classList.add('is-active');
          }
        });
      }, { rootMargin: '-45% 0px -50% 0px', threshold: 0 });
      sections.forEach(sec => spy.observe(sec));
    }

    /* 5c. dietary filter */
    const dietFilters = document.getElementById('dietFilters');
    const menuItems = document.querySelectorAll('.menu-item');
    if (dietFilters) {
      dietFilters.addEventListener('change', (e) => {
        if (e.target.name !== 'diet') return;
        const value = e.target.value;
        menuItems.forEach(item => {
          const matches = value === 'all' || item.dataset.diet === value;
          item.classList.toggle('is-hidden', !matches);
        });
        document.querySelectorAll('.menu-section').forEach(section => {
          const count = section.querySelectorAll('.menu-item:not(.is-hidden)').length;
          const counter = section.querySelector('.section-count');
          if (counter) counter.textContent = `${count} dish${count === 1 ? '' : 'es'}`;
        });
      });
    }

    /* 5d. build-your-order sticky bar */
    const addChecks = document.querySelectorAll('.add-check input[type="checkbox"]');
    const orderCount = document.getElementById('orderCount');
    const orderTotal = document.getElementById('orderTotal');
    const orderEmptyMsg = document.getElementById('orderEmptyMsg');

    function refreshOrderBar() {
      const chosen = [...addChecks].filter(c => c.checked);
      const total = chosen.reduce((sum, c) => sum + Number(c.dataset.price || 0), 0);
      orderCount.textContent = `${chosen.length} dish${chosen.length === 1 ? '' : 'es'} selected`;
      if (chosen.length) {
        orderTotal.style.display = '';
        orderTotal.textContent = `$${total.toFixed(2)}`;
        orderEmptyMsg.style.display = 'none';
      } else {
        orderTotal.style.display = 'none';
        orderEmptyMsg.style.display = '';
      }
    }
    addChecks.forEach(chk => chk.addEventListener('change', refreshOrderBar));
    refreshOrderBar();
  }

});
