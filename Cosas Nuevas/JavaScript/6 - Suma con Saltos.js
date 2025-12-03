function sumaconsaltos(inicio, fin, paso) {
  let suma = 0;
  for (let i = inicio; i <= fin; i += paso) {
    suma += i;
  }
  return suma;
}

console.log(sumaconsaltos(1, 10, 2));