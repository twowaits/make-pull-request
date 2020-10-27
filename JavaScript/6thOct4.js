<script type = "text/javascript"> 
function fibo(num) 
    { 
        if(num==1) 
            return 0; 
        if(num==2) 
            return 1; 
        var num1=0; 
        var num2=1; 
        var sum; 
        var i=2; 
        while (i<num)   
        { 
            sum=num1+num2; 
            num1=num2; 
            num2=sum; 
            i+=1; 
        } 
        return num2; 
    }

function is_prime(n)
{

  if (n===1)
  {
    return 0;
  }
  else if(n === 2)
  {
    return 1;
  }else
  {
    for(var x = 2; x < n; x++)
    {
      if(n % x === 0)
      {
        return 0;
      }
    }
    return 1;  
  }
}
	var n = window.prompt("Enter The number ");

  for(var x=1;x<n;x++){
	if(is_prime(fibo(x))==0 && fibo(x)%5!=0){ 
    document.write(","+fibo(x)); }
	else{
	 document.write(",0");	
	}
  }
</script> 



