#include <iostream>
#include <iomanip>
#include "calculator.h"
using namespace std;

static const string operators[4] = {"+", "-", "x", "/"};

calculator::calculator() {}

calculator::~calculator() {}


void calculator::getUserInput(int& x, int& y)
{
    cout << "Enter the first number: "; 
    cin >> x; 
    cout << "Enter the second number: ";
    cin >> y;
    cout << endl;
}

void calculator::printResult(int s, const int x, const int y, const double r)
{
    s--;
    
    if(s == 3)
    {
        cout << fixed; 
        cout << setprecision(2); 
        cout << x << " " << operators[s] << " " << y << " = " << r << endl << endl;
    }
    else
    {
        cout << fixed;
        cout << setprecision(0);
        cout << x << " " << operators[s] << " " << y << " = " << r << endl << endl;
    }

}

int calculator::addTwoNumbers(int x, int y)
{
    return x + y; 
}

int calculator::subtractTwoNumbers(int x, int y)
{
    return x - y; 
}

int calculator::multiplyTwoNumbers(int x, int y)
{
    return x * y; 
}

double calculator::divideTwoNumbers(double x, double y)
{
    if (y==0)
    {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return x / y; 
}
