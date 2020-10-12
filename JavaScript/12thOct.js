let Arr1 = [0, 1, 2, 0, 1, 2];
let Arr2 = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1];

function swap(a, i, j) {
    let temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

function sortArr(arr, high) {
    let low = 0;
    let mid = 0;
    let base = 1;
    while (mid <= high) {
        if (arr[mid] < base) {
            swap(arr, low, mid);
            ++low; ++mid;
        }
        else if (arr[mid] > base) {
            swap(arr, mid, high)
            --high;
        }
        else {
            ++mid;
        }
    }
}

sortArr(Arr1, Arr1.length - 1)
sortArr(Arr2, Arr2.length - 1)

console.log(Arr1);
console.log(Arr2);