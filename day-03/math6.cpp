//Programmer: Mew, I
//This programm is created using C++
/*This program take as input the length and width
calculates the area and perimeter and as output
displays thearea and preimeter */

#include <iostream>

using namespace std;

int main()
{
    //Declare variables
    int enter_length;
    int enter_width;
    int area;
    int perimeter;

    //Prompt for input from user
    cout <<"Enter the length: ";
    cin >>enter_length;
    cout <<"Enter the width: ";
    cin >>enter_width;

    //Calculate the area and perimeter
    area = enter_length * enter_width;
    perimeter = 2 * (enter_length + enter_width);

    //Display the area and perimeter
    cout << "Area: " <<"\t" <<"\t" << area << " square meters" <<endl;
    cout << "Perimeter: " <<"\t" << perimeter << " meters" <<endl;
    return 0;
}
