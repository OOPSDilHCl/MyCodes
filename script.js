const themeBtn = document.getElementById("themeBtn");

themeBtn.addEventListener("click", () => {
    document.body.classList.toggle("light");
});

// simple scroll animation
const cards = document.querySelectorAll(".card");

window.addEventListener("scroll", () => {
    cards.forEach(card => {
        const pos = card.getBoundingClientRect().top;
        if (pos < window.innerHeight - 100) {
            card.style.opacity = 1;
            card.style.transform = "translateY(0)";
        }
    });
});