//for loop

 for (var i = 0; i<5;i++){
    console.log(i);
 }

// 

//while loop

var i =0;
while (i<5){
    console.log(i);
    i++;
}


//do while
var i = 1;
do{
    console.log(i);
    i++;
    
}while(i<5);

//break and continue
for (i = 0 ; i<5;i++){
    if(i===3) continue;
    console.log(i);
}

// declarin afunction and using a return statement
function user(name){
    return name + " is good";
}

 const name = user("sujay");

 console.log(name);

 //recursive function

 var num = 1;
 function recursive(){
    console.log(num);
    num++;
    if(num < 10) {
        recursive();

    } else return;
 }

 recursive();

 var array = [1,3,4,5,5,2,3,4,5]
array.sort()
console.log (array)


// objact methods

var object ={

name:"sujay",
age:12};
console.log(Object.keys(object));
console.log(Object.values(object));
console.log(Object.entries(object));

object.freeze(object);
object.name ="sujay"


object.freeze(object);

