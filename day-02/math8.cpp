//Programmer: Mew, I
//This programm is created using C++
/*This program calculates the area of a circle */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Declare variables
    int enter_radius;
    int area;
    const float PI = 3.142;

    //Prompt for input from user
    cout <<"Enter the radius: ";
    cin >>enter_radius;

    //Calculate the area and perimeter
    area = 2 * PI * pow(enter_radius,2) ;

    //Display the area and perimeter
    cout << "Area: " <<"\t" <<"\t" << area << " square meters" <<endl;

    return 0;
}
