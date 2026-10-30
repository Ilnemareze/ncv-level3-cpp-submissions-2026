// Made with Blocks to C++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "";
    string gender = "";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    cout << "Are you a male or a female?" << endl;
    getline(cin >> ws, gender);
    cout << "Hello, " << name << " " <<endl;
    if (gender == "M")
    {
        cout << "You are a clever gentleman." << endl;
    }
    if (gender == "F")
    {
        cout << "You are a lovely lady." << endl;
    }
    return 0;
}
