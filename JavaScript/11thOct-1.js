<script>
var num,i,m=1,n=1,array = [],str="";
var num = window.prompt("Enter a number: ");
for(var i = 0; i < num; i++) {
	array.push(m);
    array.push(n);
    m=m+n;
    n=m+n;
    i++;
    }
for(var i = 0; i <= num-1; i++) {  
    str+=array[i]+" ";
    }
    
    console.log(str);
</script>
