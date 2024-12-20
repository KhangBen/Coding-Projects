#include <iostream>
using namespace std;

const int SIZE = 5; 

/*
  Best Case Time Complexity: O(n) when the array is already sorted
  Worst Case Time Complexity: O(n^2) when the array is sorted in reverse order
  Space Complexity: O(1) is in-place sorting, no extra space required
*/

/*
  In the basic bubble sort, if the array becomes sorted early, 
  the algorithm keeps on iterating through all the passes until end
*/
void basicBubbleSort(int arr[], int n)
{
  for(int i = 0; i < n - 1; i++)
  {
    // n - i - 1 calculates the number of unsorted elements that still needs to be compared. 
    for(int j = 0; j < n - i - 1; j++) 
    {
      if(arr[j] > arr[j+1])
      {
        // swap the elements
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp; 
      }
    }
  }
}

/*
  The swapped flag checks if any elements were swapped during a pass.
  If no swaps occur, the algorithm exits early because the array 
  is already sorted.
*/
void optimizedBubbleSort(int arr[], int n)
{
  for(int i = 0; i < n - 1; i++)
  {
    // n - i - 1 calculates the number of unsorted elements that still needs to be compared. 
    for(int j = 0; j < n - i - 1; j++) // Compare the only unsorted elements
    {
      bool swapped = false; // flag to track if any swapping happened
      if(arr[j] > arr[j+1])
      {
        // swap the elements
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp; 
        swapped = true; 
      }

      if (!swapped) break; // Exit early if no swaps were made
    }

  }
}

int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  // determining size n, by getting the total byte 
  // in the array divide by the one byte of index 0 
  int n = sizeof(arr) / sizeof(arr[0]); 

  cout << "Unsorted Array: ";
  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
  
  cout << endl;
  // basicBubbleSort(arr, n);
  optimizedBubbleSort(arr, n);

  cout << "Sorted Array:   ";
  for(int i = 0; i < n; i++)
  cout << arr[i] << " ";
  cout << endl << endl;


  return 0; 
}