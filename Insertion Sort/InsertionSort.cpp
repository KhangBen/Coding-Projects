#include <iostream>
using namespace std;



void insertionSort(int arr[], int size)
{
  // assume first element is already sorted i.e arr[0]
  for(int i = 1; i < size; i++)
  {
    int key = arr[i]; // to store element
    int j = i - 1; // get the previous index
    while(arr[j] > arr[i]) // change ending boundary
    {
      // perform operation
      arr[j+1] = arr[j];
      j--; 
    }



  }



}

void swap(int& a, int& b)
{
  int temp = a; 
  a = b; 
  b = a; 
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





  return 0;
}