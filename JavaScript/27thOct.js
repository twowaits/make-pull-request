//Convert decimal to binary from 1 to n

var n = parseInt(prompt("Enter last number"))
function binaryNumbers(n) {
    for (let i = 1; i <= n; i++){
      console.log(i + " in binary is " + i.toString(2));
    }
  }

  binaryNumbers(n)