let val =prompt("Enter the value");

let fb1=0;

let fb2=1;

var str="";

for (let index = 0; index < val; index++) {
    let res=fb1+fb2;
    str=str+fb2+" ";
    fb1=fb2;
    fb2=res;
}
console.log(str)