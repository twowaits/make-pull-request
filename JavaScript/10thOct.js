function swap(arr, first, last){
    var temp = arr[first];    
    arr[first] = arr[last];
    arr[last] = temp;
}
function swapStr(str, first, last){
    var arr = str.split('');
    swap(arr, first, last); // Your swap function
    return arr.join('');
}

function reverse()
{
    var str=window.prompt("Enter n: ")
    // str="swap"
    var tag=Math.floor(str.length/2)
    for (var i=0,j=str.length-1;i<tag;i=i+1,j=j-1)
    {
        str=swapStr(str,i,j);
        // console.log(str)

    }
    console.log(str)
}

reverse()