const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function bubbleSort(arr) {
  let n = arr.length;
  for (let i = 0; i < n - 1; i++) {
    for (let j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        let temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

function askNumbers(n, arr = []) {
  if (arr.length < n) {
    rl.question(`Enter number ${arr.length + 1}: `, (num) => {
      arr.push(parseInt(num));
      askNumbers(n, arr);
    });
  } else {
    console.log("\nUnsorted array:");
    console.log(arr.join(" "));

    bubbleSort(arr);

    console.log("\nSorted array:");
    console.log(arr.join(" "));

    rl.close();
  }
}

rl.question("Enter number of elements: ", (n) => {
  askNumbers(parseInt(n));
});