#include <iostream>
#include <vector>
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
void insertionSort(vector<int>& v)
{
  // assume first element is already sorted i.e arr[0]
  for(int i = 1; i < v.size(); i++)
  {
    int key = v[i]; // to store element
    int j = i - 1; // get the previous index
    while(v[j] > key && j >= 0) // change ending boundary
    {
      // perform operation
      v[j+1] = v[j];
      j--; 
    }

    v[j+1] = key; 

  }

}

// use pass by reference to avoid unnecessary copying for efficiency.  
// compared to copying large data 
void printVector(const vector<int>& v) 
{
  for(int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  
  cout << endl;
}

int main()
{
  vector<int> v = {7, 12, 9, 11, 3};

  cout << "Unsorted Vector: ";
  printVector(v);

  insertionSort(v);
  cout << "Sorted Vector: ";
  printVector(v);


  return 0;
}