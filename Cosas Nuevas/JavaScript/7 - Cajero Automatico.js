function cajero(monto) {
  const billetes = [500, 200, 100, 50, 20, 10, 5, 1];
  const resultado = {};

  for (let b of billetes) {
    if (monto >= b) {
      const cantidad = Math.floor(monto / b);
      resultado[b] = cantidad;
      monto -= cantidad * b;
    }
  }

  return resultado;
}

console.log(cajero(786));