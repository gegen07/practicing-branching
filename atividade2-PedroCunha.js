var array = [5, 6, 7, 8, 9, 10];
var n = array.length;
function somaPrefixos(array, n) {
  var newArray = array.slice(0);
  for (i = 1; i < n; i++) {
    newArray[i] = newArray[i - 1] + array[i];
  }
  console.log(newArray);
  return newArray;

}
somaPrefixos(array, n);