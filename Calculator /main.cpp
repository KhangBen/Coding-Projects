#include <iostream>
#include "calculator.h"
using namespace std;


void introduciton()
{
    cout << "Welcome to Calculator App: " << endl << endl;
}

int main()
{
    introduciton(); 
    calculator c; 

    int selection;  
    do
    {
        int x = 0; 
        int y = 0;
        double result = 0; 

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
                if (selection == 8) { cout << "Exiting Program... ...." << endl << endl; break; }
                cout << "Invalid Option: Please Pick between 1 and 4 " << endl << endl;
        }

    } while(selection != 8);


    return 0;
}