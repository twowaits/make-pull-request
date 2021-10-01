# Program to Sort an Array and get the required time in seconds:
import time


def bubble_sort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(0, n-i-1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


arr = list(map(int, input("Enter the elements of the array: ").split()))
start = time.time()
bubble_sort(arr)
print("Sorted array is: ", arr)
end = time.time()
print(f"Time taken to sort the array is: {end-start} seconds")
