let n = 27

function isPrime(num) {
  for(var i = 2; i < num; i++)
    if(num % i === 0) return false;
  return num > 1;
}

function filterPrime(item, index, arr){
  if (isPrime(arr[index])) {arr[index] = item*0}
}

function divFive(item, index, arr){
 if (arr[index] % 5 == 0 ) {arr[index] = item*0}
}

function fibo(n){
  lista = [1,1]

  for(i = 0; i<n-2; i++){
    lista.push(lista[lista.length-1]+lista[lista.length-2])
  }

  lista.forEach(divFive) 
  lista.forEach(filterPrime)

  return lista
}

console.log(fibo(n))