function esperfecto(n) {
  let suma = 0;
  for (let i = 1; i <= n / 2; i++) {
    if (n % i === 0) suma += i;
  }
  return suma === n;
}

function perfectoshasta1000() {
  const lista = [];
  for (let n = 1; n <= 1000; n++) {
    if (esperfecto(n)) lista.push(n);
  }
  return lista;
}

console.log(perfectoshasta1000());