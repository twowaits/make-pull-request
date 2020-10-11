const prompt = require('prompt-sync')();

// program to generate fibonacci series up to a certain number

// take input from the user
let number = parseInt(prompt('Enter a positive number: '));

//Initializing the 1st, 2nd and nextTerm.
let n1 = 0, n2 = 1, nextTerm;

console.log('Fibonacci Series:');

if(number==1) {
    console.log(n1);
} else if(number==2) {
    process.stdout.write(n1 + ' '); // print 0
    process.stdout.write(n2); // print 1
    console.log();
} else {
    process.stdout.write(n1 + ' '); // print 0
    process.stdout.write(n2 + ' '); // print 1
    nextTerm = n1 + n2;

    number-=2;
    while (number) {

        // print the next term
        process.stdout.write(nextTerm+ ' ');

        n1 = n2;
        n2 = nextTerm;
        nextTerm = n1 + n2;
        number--;
    }
}