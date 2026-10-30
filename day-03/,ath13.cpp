//Programmer: Mew, I
//This programm is created using C++
/*This program is about control structure - Switch-statement */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int enter_level;
    string description;

    cout << "Enter level (1 or 2):";
    cin >> enter_level;

    switch (enter_level)
    {
        case 1:
            description = "Level 1";
            break;
        case 2:
            description = "Level 2";
            break;
        default:
            description = "Invalid level";
    }
cout << description;
    return 0;
}
