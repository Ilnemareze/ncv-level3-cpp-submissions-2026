//Programmer: Mew, I
//This program was created using C++
/*This program prompt for 2 numbers and then do addition,
subtraction, multiplication and devision and returns the answer */

#include <iostream>
#include <iomanip>

using namespace std;

int calculateSum(int fval1, int fval2)
{
    return fval1 + fval2;
}

int calculateDifference(int fval1, int fval2)
{
    return fval1 - fval2;
}

int calculateMultiply(int fval1, int fval2)
{
     return fval1 * fval2;
}

int calculateDivide(int fval1, int fval2)
{
     return fval1 / fval2;
}

void generateValues(int &fval1, int &fval2)
{
    //generating values 1 to 100
    fval1 = rand() % 100 + 1;
    fval2 = rand() % 100 + 1;
}

void showMenu(int &fchoice)
{
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cin >> fchoice;
}

int main()
{
    int mval1;
    int mval2;
    int mchoice = 0;

     srand(time(0));

     generateValues(mval1, mval2);

     do {
        showMenu(mchoice);
        cout << "Enter your choice (1-4).  Exit (0): ";

        switch (mchoice)
        {
            case 1:
                calculateSum(mval1, mval2);
                cout << "Sum: " << calculateSum(mval1, mval2) <<endl;
                break;
            case 2:
                calculateDifference(mval1, mval2);
                cout << "Sum: " <<  calculateDifference(mval1, mval2) <<endl;
                break;
            case 3:
                calculateMultiply(mval1, mval2);
                cout << "Sum: " << calculateMultiply(mval1, mval2) <<endl;
                break;
            case 4:
                calculateDivide(mval1, mval2);
                cout << "Sum: " << calculateDivide(mval1, mval2) <<endl;
                break;
        }
     } while (mchoice != 0);

    return 0;
}
