const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("", function(num) {
    main(num);
});

const main = num => {
	let len = num.length;
	let word;

	switch (len) {
		case 1: 
			word = num;
			break;
		case 2: 
			word = tens(num[0]) + num[1]; 
			break;
		case 3: 
			word = hundreds(num[0]) + tens(num[1]) + num[2]; 
			break;
		case 4: 
			word = thousands(num[0]) + hundreds(num[1]) + tens(num[2]) + num[3]; 
			break;
		case 5: 
			word = thousands(num.substring(0, 2)) + hundreds(num[2]) + tens(num[3]) + num[4];
			break;
		case 6: 
			word = lacs(num[0]) + thousands(num.substring(1, 3)) + hundreds(num[3]) + tens(num[4]) + num[5];
			break;
		case 7: 
			word = lacs(num.substring(0, 2)) + thousands(num.substring(2, 4)) + hundreds(num[4]) + tens(num[5]) + num[6];
			break;
		default:
			word = crores(num.substring(0, len-7)) + lacs(num.substring(len-7, len-5)) + thousands(num.substring(len-5, len-3)) + hundreds(num[len-3]) + tens(num[len-2]) + num[len-1]
			break;
	}

	console.log(word);
}

rl.on("close", function() {
    process.exit();
});

const tens = a => {
	return String(Number(a)) + (Number(a) > 1 ? ' tens and ' : ' ten and ')
};

const hundreds = a => {
	return String(Number(a)) + (Number(a) > 1 ? ' hundreds and ' : ' hundred and ')
};

const thousands = a => {
	return String(Number(a)) + (Number(a) > 1 ? ' thousands and ' : ' thousand and ')
};

const lacs = a => {
	return String(Number(a)) + (Number(a) > 1 ? ' lacs and ' : ' lac and ')
};

const crores = a => {
	return String(Number(a)) + (Number(a) > 1 ? ' crores and ' : ' crore and ')
};