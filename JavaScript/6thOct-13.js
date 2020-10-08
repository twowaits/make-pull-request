var number = prompt("Enter limit");

series = [];
var n1 = 1;
var n2 = 1;
var next;

series.push(n1);
series.push(n2);

for (var i = 0; i < number - 2; i++) {
  next = n1 + n2;
  n1 = n2;
  n2 = next;

  if (n2 === 2) {
    series.push(0)
  } else if (n2 % 2 === 0 || (n2 % 3 === 0 && n2 > 3)) {
    series.push(n2)
  } else {
    series.push(0)
  }
}

prompt(series);
