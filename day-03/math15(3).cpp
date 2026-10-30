//Programmer: Mew, I
//This programm is created using C++
/*This program is about control structure - Iteration (for preTest) */

#include <iostream>

using namespace std;

int main()
{
    //Declare
    int num;
    float sum;
    float average;

    //Iteration
    for (int i = 1; i <= 5; i++)
    {
        //Prompt for input
        cout << "Enter number " << i <<": ";
        cin >> num;
        if (num > 0 && num <= 50)
        {
            //Accumulate
            sum += num;
        }
        else
        {
            cout << "Invalid number.  Try again: ";
            i--;
        }
        //Calculate
        average = sum / i;
    }

    //Output
    cout <<"Sum of numbers: " << sum << endl;
    cout <<"Average: " << average << endl;

    return 0;
}
