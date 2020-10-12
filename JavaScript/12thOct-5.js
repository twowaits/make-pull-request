<script>

var z=0;
var o=0;
var t=0;
var str;

var ar = [0, 1, 0, 1, 2, 1, 2];

for(var i=0;i<ar.length;i++)
{
	if(ar[i]==0)
    	z++;
    else if(ar[i]==1)
    	o++;
    else if(ar[i]==2)
    	t++;
}

str = "{";
for(var i=0;i<z;i++)
{
	if(i==(z-1))
    {
    	str += "0";
    }
    else
		str += "0, ";
}

for(var i=0;i<o;i++)
{
	str += ", 1";
}

for(var i=0;i<(t);i++)
{
	str += ", 2";
}
	str += "}";
console.log(str);
</script>
