#include <iostream>
using namespace std; 

/*
  Time Complexity:
    - Best Case: O(n^2) Selection sort goes through the entire array to find the smallest element, even when the array is sorted
    - Worse Case: O(n^2) Occurs when the array is in reverse order
    - Average Case: O(n^2) Selection Sort will always use O(n^2) comparisons regardless of data order

  Space Complexity:
    - O(1) in-place sorting, no extra space needed other than temporary variable used for swapping
*/

void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int lowestIndex = i; // lowestIndex would be the current value of i
    for (int j = i + 1; j < size; j++)  // itterate i + 1, which is one before i
    {
      if(arr[j] < arr[lowestIndex]) // if the j index is less than the lowest index 
        lowestIndex = j;            // replace
    }

    if(lowestIndex != i)            // checks if there is a swap
    {
      // swap function
      swap(arr[i], arr[lowestIndex]);
    }
  }

}

void swap(int& a, int& b)
{
  int temp = a; 
  a = b; 
  b = temp; 
}

void printArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}


int main()
{

  int size; 
  cout << "How many elements in the array: "; 
  cin >> size; 

  // edge case handeling
  if(size == 0)
  {
    cout << "Empty Array. " << endl;
    return 0;
  }

  int arr[size];

  cout << "Enter " << size << " elements: " << endl;
  for(int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  // edge case handeling
  if(size <= 1)
  {
    cout << "Array is already sorted. " << endl;
    printArray(arr, size);
    
    return 0;
  }

  cout << endl;
  cout << "Unsorted Array: "; 
  printArray(arr, size);

  selectionSort(arr, size);

  cout << "Sorted Array: "; 
  printArray(arr, size);

  return 0;
}