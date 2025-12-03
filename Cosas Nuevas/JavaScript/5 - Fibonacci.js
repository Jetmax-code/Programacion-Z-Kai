function fibonacci(n) {
  const serie = [];
  let a = 0, b = 1;

  for (let i = 0; i < n; i++) {
    serie.push(a);
    const siguiente = a + b;
    a = b;
    b = siguiente;
  }

  return serie;
}

console.log(fibonacci(7));