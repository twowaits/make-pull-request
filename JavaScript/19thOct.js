let arr = [
    [1,4,7,11,15],
    [2,5,8,12,19],
    [3,6,9,16,22],
    [10,13,14,18,24],
    [18,21,23,26,30]
]

const find = (matrix, number) => {
    let columnLength = matrix.length;
    if(columnLength == 0) return false;
    let rowLength = matrix[0].length;
    if(matrix[0][0] > number || matrix[columnLength - 1][rowLength - 1] < number) return false;
    for(let i = 0; i < columnLength; i++){
        if(matrix[i][0] > number) return false;
        for(let j = 0;j < rowLength; j++){
            if(matrix[i][j] == number) return true;
            if(matrix[i][j] > number) break;
        }
    }
    return false;
}

console.log(find(arr,5))