const sort = (arr) => {
  let low = 0;
  let mid = 0;
  let high = arr.length - 1;

  while (mid <= high) {
    if (arr[mid] === 0) {
      swap(arr, low++, mid++);
    } else if (arr[mid] === 1) {
      mid++;
    } else if (arr[mid] === 2) {
      swap(arr, mid, high--);
    } 
  }
  return arr;
}

//Swap elements
const swap = (arr, element1, element2) => {
  [arr[element1], arr[element2]] = [arr[element2], arr[element1]];
}

console.log(sort([0, 1, 2, 0, 1, 2]));
console.log(sort([0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]));
