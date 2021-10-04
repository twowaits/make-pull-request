
  CP = 0;
  x = 1;
  function RN() {
    return Math.floor(Math.random() * (256 - 1) + 1);
  }
  function GCD(N1, N2) {
    while (N1 != 0 && N2 != 0)
    {
        if (N1 > N2) {
            N1 %= N2;
        } else  {
            N2 %= N1;
        }
    }
    return Math.max(N1, N2);
  }
  function Coprime(N1, N2) {
    return ((GCD(N1, N2)  == 1)?true:false);
  }
  console.log("Starting the sequence!")
  for (var i = 0; i < 1000; i++) {
    N1 = RN();
    N2 = RN();
    console.log(`Rolled ${N1} & ${N2}`);
    if (Coprime(N1, N2)) {
      CP += 1;
      console.log("Coprimes!");
    } else {
      console.log("Cofactors!");
    }
  }
  console.log("Coprimes are = "+CP);
  CP /= 1000;
  NewPi = Math.sqrt(6/CP);
  console.log("Pi Generated = "+NewPi);
  perc = (NewPi * 100)/Math.PI;
  console.log(100-perc+"%")
