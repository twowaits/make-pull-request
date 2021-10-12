/* An Efficient Algorithm to search if a given number exists in the given row & column wise sorted matrix.
   
   Time Complexity = O(rows+cols)
   Space Complexity = O(1)     */

// Sample Matrix for testing
let matrix = [
    [1,4,7,11,15],
    [2,5,8,12,19],
    [3,6,9,16,22],
    [10,13,14,18,24],
    [18,21,23,26,30]
]

// Search function 
const search = (matrix, number) => {
    // Get the number of cols and rows
	let cols = matrix.length;
    if(cols == 0) 
    	return false;
    let rows = matrix[0].length;
    
    let smallest = matrix[0][0];
    let largest = matrix[cols-1][rows-1];
    if(number < smallest || number > largest)
        return false;
        
    // Loop through each col to check if it can be skipped.
    for(let i=0, j=rows-1; i < cols && j >= 0; ){
    	if(matrix[i][j] == number)
        	return true;
        if(matrix[i][j] > number)
        	j--;
        else
        	i++;
    }
    
    return false;
}

// Testing
console.log("Number 0 is present? ", search(matrix, 0));
console.log("Number 10 is present? ", search(matrix, 10));