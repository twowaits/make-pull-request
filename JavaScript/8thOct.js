let value=prompt("Enter the value");

for (let i = 0; i < value; i++) {
    let str="";
    for (let j = 0; j < value-i; j++) {
        str=str+" ";
        
    }
    for (let j = 0; j <=i; j++) {
        if(i==0||i==value-1||j==0||j==i){
       str=str+"*"+" ";
        }else{
            str=str+"  ";  
        }
    }
    console.log(str)
}