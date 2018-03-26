function isThatAPrimeNumber(p) {
  const upper = Math.sqrt(p);
  for(let i = 2; i <= upper; i++) {
    if (p % i === 0 ) {
      return false;
    }
  }
  return true;
}

module.exports = {
  isThatAPrimeNumber
};
