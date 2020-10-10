function factorial(num) {
  if (num <= 1) return 1;

  return num * factorial(num - 1);
}

function gcdOfFactorial(num1, num2) {
  return factorial(Math.min(num1, num2));
}

console.log(gcdOfFactorial(5, 120));