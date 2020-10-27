function factorial(n){
    
    if(n == 0 || n == 1){
         //base case
          return 1;
    }else{
        //recursive case
        return n * factorial(n-1);
    }
}

var gcdOfFactorial = function(a, b) {
   if(a<b){
   		return a;
   }else{
   		return b;
   }
};

//output
console.log(gcdOfFactorial(factorial(5),factorial(120)));
