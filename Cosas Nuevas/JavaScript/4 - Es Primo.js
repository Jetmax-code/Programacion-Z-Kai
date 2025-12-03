function esprimo(n) {
  if (n <= 1) return false;
  if (n === 2) return true;
  if (n % 2 === 0) return false;

  const limite = Math.sqrt(n);
  for (let i = 3; i <= limite; i += 2) {
    if (n % i === 0) return false;
  }
  return true;
}

console.log(esprimo(7));
console.log(esprimo(12));