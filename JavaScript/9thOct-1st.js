<script>
// Javascript to find factorial
// of given number
 
// function to find factorial
// of given number
function factorial(n) {
  if (n == 0) return 1;
  return n * factorial(n - 1);
}
 
let num = 5;
document.write("Factorial of " + num + " is " + factorial(num));
  
</script>
