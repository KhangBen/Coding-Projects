#include <iostream>
using namespace std;


void loop(int n)
{
  int first = 0; 
  int second = 1; 

  cout << first << " " << second << " "; 

  for(int i = 0; i < n; i++)
  {
    int newNum = first + second; 
    cout << newNum << " ";
    first = second; 
    second = newNum; 
  }
}


int recursion(int n)
{
  if (n == 0)
    return 0; 
  if (n == 1)
    return 1; 
  return recursion(n - 1) + recursion(n - 2); 
}

int main()
{
  int counter = 10;
  // loop(counter); 

  for(int i = 0; i < counter; i++)
  {
    cout << recursion(counter) << " ";
  }

  return 0;
}
