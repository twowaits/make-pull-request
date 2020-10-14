let sample_input_arr1 = [1,7,0,9,12];
let sample_input_arr2 = [9,7,0,2,12,1,17];

function maxConsecutiveGap(...arr){
    sorted_arr = arr.sort();
    max_diff = 0;
    for(var i=0;i<sorted_arr.length;i++){
        if(Math.abs(sorted_arr[i+1]-sorted_arr[i])>max_diff){
            max_diff = Math.abs(sorted_arr[i+1]-sorted_arr[i]);
        }
    }
    return max_diff;
}

console.log(maxConsecutiveGap(...sample_input_arr1));
console.log(maxConsecutiveGap(...sample_input_arr2));