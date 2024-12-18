#include <iostream>
#include <cassert>
#include "calculator.h"
using namespace std;

const int EXIT_OPTION = 8;

void introduciton()
{
    cout << "Welcome to Calculator App: " << endl;
}

void unitTests()
{
    calculator c;
    // testing individual functions
    assert(c.addTwoNumbers(3, 4) == 7);
    assert(c.subtractTwoNumbers(15, 3) == 12);
    assert(c.multiplyTwoNumbers(7, 9) == 63);
    assert(c.divideTwoNumbers(5, 3) == 1.67);
    cout << "All tests passed! " << endl;
}

int mainProgram()
{
    introduciton(); 
    calculator c; 

    int selection;  
    do
    {
        int x = 0; 
        int y = 0;
        double result = 0; 

        cout << "--------------------------------------------" << endl;
        cout << "   Pick from the following options: " << endl;
        cout << "   1) Add Two Numbers      " << endl;
        cout << "   2) Subtract Two Numbers " << endl;
        cout << "   3) Multiply Two Numbers " << endl;
        cout << "   4) Divide Two Numbers   " << endl;
        cout << "   8) Exit Program         " << endl;
        cout << "--------------------------------------------" << endl << endl;

        cout << "Selecting: ";
        cin >> selection; 
        cout << endl;


        switch (selection)
        {
            case 1:
                c.getUserInput(x,y);
                result = c.addTwoNumbers(x, y);
                c.printResult(selection, x, y, result);
                break;
            case 2:
                c.getUserInput(x,y);
                result = c.subtractTwoNumbers(x, y);
                c.printResult(selection, x, y, result);
                break;
            case 3:
                c.getUserInput(x,y);
                result = c.multiplyTwoNumbers(x, y);
                c.printResult(selection, x, y, result);
                break;
            case 4:
                c.getUserInput(x,y);
                result = c.divideTwoNumbers(x, y);
                c.printResult(selection, x, y, result);
                break;

            default:
                if (selection == 8) { cout << "Exiting Program..." << endl << endl; break; }
                cout << "Invalid Option: Please Pick between 1 and 4 " << endl << endl;
        }

    } while(selection != EXIT_OPTION);


    return 0;
}

int main()
{
    mainProgram(); // main program

    // unitTests(); // units tests. 


    return 0; 
}