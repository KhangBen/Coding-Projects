#include <iostream>
using namespace std;



void insertionSort(int arr[], int size)
{
  



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