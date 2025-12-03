function piramide(n) {
  let salida = "";
  for (let i = 1; i <= n; i++) {
    const espacios = " ".repeat(n - i);
    const bloques = "*".repeat(i * 2 - 1);
    salida += espacios + bloques + "\n";
  }
  return salida;
}

console.log(piramide(5));