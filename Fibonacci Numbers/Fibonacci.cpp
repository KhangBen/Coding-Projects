#include <iostream>
using namespace std;


void loop()
{
  int first = 0; 
  int second = 1; 

  cout << first << " " << second << " "; 

  for(int i = 0; i < 10; i++)
  {
    int newNum = first + second; 
    cout << newNum << " ";
    first = second; 
    second = newNum; 
  }
}

int main()
{

  loop(); 
  return 0;
}
