// Using JavaScript(Node.js)

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    const row = +(readLine());
    var i, j, k;
    let res = '';
    
    for(i=1; i<row; i++){
        for(j=i; j<row; j++)
            res += ' ';
        
        for(k=0; k<2*row; k++){
            if(k == 0||k == 2*i-2)
                res += '*';
            else
                res += ' ';
        }
        res += '\n';
    }
    for(i=0; i<row; i++)
        res += '* ';
    
    console.log(res);
}
