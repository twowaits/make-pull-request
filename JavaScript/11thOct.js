function Fibonacci(num){
	let before = 0;
	let actual = 1;
	let next = 1;

	for(let i = 0; i < num; i++){
		console.log(next)
		before = actual + next;
		actual = next
		next = before
	}
}

Fibonacci(100);

