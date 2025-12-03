function contardigitos(n) {
  n = Math.abs(n);
  if (n === 0) return 1;

  let contador = 0;
  while (n > 0) {
    n = Math.floor(n / 10);
    contador++;
  }
  return contador;
}

console.log(contardigitos(0));
console.log(contardigitos(1234));
console.log(contardigitos(-987));