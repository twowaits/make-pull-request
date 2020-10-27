const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("", function(num) {
    main(Number(num));
});

const main = num => {
    for (let i = 0; i < num; i++) {
        for (let j = 0; j < (num-i); j++) {
            process.stdout.write(" ");
        }        
        for (let j = 0; j < (2*i+1); j++) {
            if (j === 0 || j === (2*i) || i === num-1) {
                process.stdout.write("\x1b[31m"+"*");
            } else {
                process.stdout.write(" ");
            }
        }  
        console.log();      
    }  
}

rl.on("close", function() {
    process.exit();
});