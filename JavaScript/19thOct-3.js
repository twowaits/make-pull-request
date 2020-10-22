// An algorithm to search a value in a 2D metrix

//Sample array
let array = [
  [1, 4, 7, 11, 15],
  [2, 5, 8, 12, 19],
  [3, 6, 9, 16, 22],
  [10, 13, 14, 18, 24],
  [18, 21, 23, 26, 30],
];

const searchValue = (matrix, value) => {
  // getting the array boundaries

  const columnLen = matrix.length;

  if (columnLen == 0) {
    return false;
  }

  const rowLen = matrix[0].length;

  if (matrix[0][0] > value || matrix[rowLen - 1][columnLen - 1] < value) {
    return false;
  }

  for (let i = 0; i < rowLen; i++) {
    if (matrix[i][0] > value) {
      return false;
    }
    for (let j = 0; j < columnLen; j++) {
      if (matrix[i][j] == value) {
        return true;
      }
      if (matrix[i][j] > value) {
        break;
      }
    }
  }

  return false;
};

console.log(searchValue(array, 10));
