

```javascript
function replaceCharacters(inputString) {
  var replacedString = inputString.replace(/x/g, 'd').replace(/d/g, '0').replace(/0/g, 's');
  return replacedString;
}

var input = "x x x d d 0 s";
var output = replaceCharacters(input);
console.log(output);
```

