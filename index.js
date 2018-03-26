const js = require('./optimusPrime.js');
const addon = require('./build/Release/optimusPrime.node');
const optimusPrime = new addon.OptimusPrime();

console.time('Javascript');
for (var i = 0, len = 100000; i < len; i++) {
  js.isThatAPrimeNumber(i)
}
console.timeEnd('Javascript');

console.time('C++');
for (var i = 0, len = 100000; i < len; i++) {
  optimusPrime.isThatAPrimeNumber(i)
}
console.timeEnd('C++');
