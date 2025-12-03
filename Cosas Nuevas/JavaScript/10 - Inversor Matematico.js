function invertirNumero(n) {
  let num = Math.abs(n);
  let invertido = 0;

  while (num > 0) {
    const dig = num % 10;
    invertido = invertido * 10 + dig;
    num = Math.floor(num / 10);
  }

  return n < 0 ? -invertido : invertido;
}

console.log(invertirNumero(123));
console.log(invertirNumero(-9876));