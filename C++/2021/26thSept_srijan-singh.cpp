//Merge Sort

#include <iostream>

void display(int arr[], int lenght)
{
  for(int i=0; i<lenght; i++)
  {
    std::cout<<arr[i]<<" ";
  }
  std::cout<<"\n";
}

void merge(int arr[], int start, int mid, int end)
{
  int length = end - start + 1;

  int temp[length];

  int left = start, right = mid + 1, index = 0;

  while (left<=mid and right<=end)
  {
    if(arr[left] <= arr[right])
    {
      temp[index++] = arr[left++];
    }
    else
    {
      temp[index++] = arr[right++];
    }
  }

  while(left<=mid)
  {
    temp[index++] = arr[left++];
  }

  while(right<=end)
  {
    temp[index++] = arr[right++];
  }

  for(int i=start; i<=end; i++)
  {
    arr[i] = temp[i - start];
  }
  
}

void mergeSort(int arr[], int start, int end)
{
  if(start < end)
  {
    int mid = (start + end)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
  }
}

int main()
{
  int length;

  std::cout<<"Enter length of the array: ";
  std::cin>>length;

  int arr[length];

  for(int i=0; i<length; i++)
  {
    std::cout<<"Enter Element "<<(i+1)<<" : ";
    std::cin>>arr[i];
  }

  std::cout<<"Given Array : ";
  display(arr, length);

  mergeSort(arr, 0, length-1);

  std::cout<<"Sorted Array : ";
  display(arr, length);

  return 0;
}
