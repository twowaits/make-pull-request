function scramble(str)
{   let l=str.length;
    let res=[];
    if(str.length==1){return str;}
    else{ for(let a=0;a<l;a++){
        const first=str[a];
        const remain=str.substring(0,a)+str.substring(a+1);
        const permute=scramble(remain);
        for(var b=0;b<permute.length;b++){res.push(first+permute[b]);}
    }
return res;}
}
console.log(scramble('WORD'));