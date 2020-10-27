function permutations(str){
    let results = [];

    if(str.length == 1)
    {
        return str;
    }
    else{
        for(let i=0;i < str.length; i++){
            const first = str[i];
            const charsremaining = str.substring(0,i) + str.substring(i+1);
            const remainingperms = permutations(charsremaining);
            for(let j=0; j < remainingperms.length; j++)
            {
                results.push(first + remainingperms[j] );
            }
        }
        return results;
    }
}

console.log(permutations('ABC'));
console.log(permutations('ABSG'));
