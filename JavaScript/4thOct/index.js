const input = require("readline-sync").question;

function zigzag(rows, cols) {
    cols++;
    let arr = " ".repeat(rows).split("").map(e => e.trim());

    let cr = 0;
    let add = 1;
    let num = 1;

    for (let cc = 0; cc < cols; cc++) {
        for (let i = 0; i < rows; i++) {
            if(i == cr) { arr[i] += num; num++; }
            else arr[i] += "  ";
        }

        cr += add;
        if(cr < 0) { cr = 1; add = 1 }
        else if(cr > rows) { cr = rows - 2; add = -1; }
    }

    console.log(arr.join("\n"));
}

let rows = input("Rows: ");

if(!rows) {
    console.log("Invalid number of rows!");
    process.exit();
}

let cols = input("Cols: ");

if(!cols) {
    console.log("Invalid number of columns!");
    process.exit();
}

console.log("\n");

zigzag(rows, cols);