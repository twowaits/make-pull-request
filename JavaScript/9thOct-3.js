// Defining the Factorial Function First
function factorial(a_number) {
    if (a_number === 0){
        return 1;
    }
    return a_number * factorial(a_number - 1);
}

// Defining GCD Function
function gcdfact(a, b) {
    return factorial(Math.min(a, b));
    // By Using some Mathematical Command Sense xD
}


// Taking Input
const prompt = require("prompt-sync")();

const num_as_str = prompt("Please enter Your Numbers: ");

// Converting the String to Array
const num_args = num_as_str.split(/ +/g);

// Then to Number
const num_1 = Number(num_args[0]);
const num_2 = Number(num_args[1]);

// Calling the GCD Function
const res = gcdfact(num_1, num_2);
console.log(res);
