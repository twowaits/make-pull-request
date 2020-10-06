function isPrime(num)
{
     let root=Math.floor(Math.sqrt(num));
     for(var i=2; i <= root;i=i+1)
     {
         if(num%i==0)
         {
             return false
         }
     }
     return true
}

function fib (num,array)
{
    for (let i =2;i<=num;i++)
    {
        array[i]=array[i-1]+array[i-2];
    }
    return array
}
function printer(array)
{
    fibs=new Array()
    fibs.push(1)
    fibs.push(1)
    fibs.push(2)
    for (let v=4; v<array.length;v=v+1) {
        if(isPrime(array[v]) ||  (array[v]%5==0))
        {
            fibs.push(0)
        }
        else 
        {
            fibs.push(array[v])
        }
    }
    return fibs
}
function main()
{
    var n=Number(window.prompt("Enter n: "))
    arr=new Array(n+1)
    arr[0]=0
    arr[1]=1
    array=fib(n,arr)
    // console.log(array)
    console.log(printer(array))
    document.write(printer(array))


}
main()