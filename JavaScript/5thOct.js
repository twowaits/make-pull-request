var inputString = '';
var currentLine = 0;

process.stdin.on('data', (inputStdin) => {
	inputString += inputStdin;
});

process.stdin.on('end', (_) => {
	inputString = inputString.trim().split('\n').map((string) => {
		return string.trim();
	});

	main();
});

function readLine() {
	return inputString[currentLine++];
}

function main() {
	var n = Number(readLine());
	var c = Math.ceil(Math.sqrt(n));
	var arr = new Array(c);

	for (let i = 0; i < arr.length; i++) {
		arr[i] = new Array(c);
	}

	var r1 = 0,
		c1 = 0,
		r2 = c,
		c2 = c,
		num = 1;

	while (r1 < r2 && c1 < c2) {
		for (let i = c1; i < c2; i++) arr[r1][i] = num++;
		r1++;
		for (let i = r1; i < r2; i++) arr[i][c2 - 1] = num++;
		c2--;
		for (let i = c2 - 1; i >= c1; i--) arr[r2 - 1][i] = num++;
		r2--;
		for (let i = r2 - 1; i >= r1; i--) arr[i][c1] = num++;
		c1++;
	}
	for (let i = 0; i < c; i++) {
		console.log(
			arr[i]
				.map((x) => {
					if (x > n) return '  ';
					else if (x > 10) return x;
					else return x + ' ';
				})
				.join('  ')
		);
	}
}
