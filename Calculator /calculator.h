#ifndef CALCULATOR_H     // Guard: prevents multiple inclusions   
#define CALCULATOR_H

#include <iostream>
using namespace std;


class calculator 
{

    private:

    public:

    calculator(); 
    ~calculator(); 

    void getUserInput(int&, int&);

    void printResult(int, const int, const int, const double);

    int addTwoNumbers(int, int);

    int subtractTwoNumbers(int, int);

    int multiplyTwoNumbers(int, int);

    double divideTwoNumbers(double, double);

};




#endif  