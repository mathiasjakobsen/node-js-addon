## Node.js C++ Addon

---

## What the hell is it?

---

## Tools

- [NAN](https://github.com/nodejs/nan)
- [node gyp](https://github.com/nodejs/node-gyp)
- [(N-API)](https://nodejs.org/api/n-api.html)

---

## Can haz one?

---

## Optimus Prime
#### Prime Number Checker

---

Simplest Possible Addon

```
addon/
    |---- package.json
    |---- binding.gyp
    |---- main.cc
```

---

Optimus Prime Addon

```
optimus_prime/
    |---- package.json
    |---- binding.gyp
    |---- index.js
    |---- Main.cpp
    |---- OptimesPrime.cpp
    |---- OptimusPrime.h
    |---- OptimusPrime.js
```

---

Algorithm

```js
// Javascript
function isThatAPrimeNumber(p) {
  const upper = Math.sqrt(p);
  for(let i = 2; i <= upper; i++) {
    if (p % i === 0 ) {
      return false;
    }
  }
  return true;
}
```

```cpp
// C++
bool isThatAPrimeNumber(o) {
  int upper = sqrt(p);
  for(int i = 2; i <= upper; i++) {
      if (p % i == 0 ) {
          return false;
      }
  }
  return true;
}
```

---

## Live Coding :boom:
