let input=prompt("Enter the value")

let val=1;
let row=0;
let col=0;
let arr= new Array(input);
for (let index = 0; index < input; index++) {
    arr[index]=new Array(input)
    
}
for ( row = 0; row <= input/2; row++) {
    
for ( let c = row; c <input-row ; c++) {
    arr[row][c]=val;
    val++;
}

for (let r = row+1; r <input-row; r++) {
    arr[r][input-row-1]=val;
    val++;
}

for (let c=input-row-2;c>=row;c--) {
   arr[input-row-1][c]=val; 
   val++;
}   

for (let r=input-row-2;r>row;r--) {
    arr[r][row]=val; 
    val++;
 }   

}
    
console.log(arr)
