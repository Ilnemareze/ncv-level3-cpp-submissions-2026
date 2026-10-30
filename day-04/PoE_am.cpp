//Programmer: Mew, I
//This program was created using C++
/*This program prompt for 2 numbers and then do addition,
subtraction, multiplication and devision. */

#include <iostream>
#include <iomanip>

using namespace std;

//Functions
void getValues(int &fval1, int &fval2)
{
    cout << "Enter two numbers: ";
    cin >> fval1 >> fval2;
}

void calculateSum(int fval1, int fval2)
{
    cout << "Sum of two numbers: " << fval1 + fval2 << endl;
}

void calculateDifference(int fval1, int fval2)
{
    cout << "Differencce of two numbers: " << fval1 - fval2 << endl;
}

void calculateMultiply(int fval1, int fval2)
{
     cout << "Multiplication of two numbers: " << fval1 * fval2 << endl;
}

void calculateDivide(int fval1, int fval2)
{
     cout << "Division of two numbers: " <<  fval1 / fval2 << endl;
}

//Main function
int main()
{
    int mval1;
    int mval2;

    //Call functions
    getValues(mval1, mval2);
    calculateSum( mval1, mval2);
    calculateDifference(mval1, mval2);
    calculateMultiply(mval1, mval2);
    calculateDivide(mval1, mval2);

    return 0;
}
