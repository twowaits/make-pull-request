
//Functions that sort the given array putting all 0s first, then all 1s and all 2s in last.

void swapping(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void array_sort(int A=[], int size) 
{ 
    int low = 0; 
    int high = size - 1; 
    int mid = 0; 
  
    while (mid <= high) 
    { 
        switch (A[mid]) 
        { 
        case 0: 
            swapping(&A[low++], &A[mid++]); 
            break; 
        case 1: 
            mid++; 
            break; 
        case 2: 
            swapping(&A[mid], &A[high--]); 
            break; 
        } 
    } 
} 