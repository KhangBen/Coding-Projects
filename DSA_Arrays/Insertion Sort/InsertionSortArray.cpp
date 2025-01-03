#include <iostream>
using namespace std;

/*
  Time Complexity:
    Base Case:      O(n) when the array is already sorted. One comparison per element
    Average Case:   O(n^2) 
    Worst Case:     O(n^2)when the array is in reverse order, requiring maximum comparisons and shifts

  Space Complexity: O(1) In-place sorting (no extra memory used)

  Observations:
    Good for small or partially sorted arrays. 
    Not efficient when it comes to large datasets 
*/
void insertionSort(int arr[], int size)
{
  // assume first element is already sorted i.e arr[0]
  for(int i = 1; i < size; i++)
  {
    int key = arr[i]; // to store element
    int j = i - 1; // get the previous index
    while(arr[j] > key && j >= 0) // change ending boundary
    {
      // perform operation
      arr[j+1] = arr[j];
      j--; 
    }

    arr[j+1] = key; 

  }

}


void printArray(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  
  cout << endl;
}

int main()
{
  /*
  int size; 
  cout << "How many elements in the array: ";
  cin >> size; 
  cout << endl;

  if (size == 0)
  {
    cout << "Empty Array" << endl;
    return 0;
  }
  
  int array[size];

  cout << "Enter " << size << " elements: " << endl;
  for(int i = 0; i < size; i++)
  {
    cin >> array[i];
  }

    if (size <= 1)
  {
    cout << "Arary is already sorted: ";
    printArray(array, size);
  }

  */
  
  int size = 5; 
  int array[] = {7, 12, 9, 11, 3};

  cout << "Unsorted Array: ";
  printArray(array, size);

  insertionSort(array, size);
  cout << "Sorted Array: ";
  printArray(array, size);



  return 0;
}