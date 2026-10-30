//Programmer: Mew, I
//This program was created using C++
/*This program is geting 5 marks from the user, displaying 
the 5 marks and also determining the highest and lowest marks */

#include <iostream>  //input/output (cout / cin)

using namespace std;

//Get marks
void getMarks(int mrk[], int sz)
{
    for (int x = 0; x < sz; x++)
    {
        cout <<"Enter mark: " << x + 1 << " : ";
        cin >>mrk[x];
     }
}

//Display marks
void displayMarks(int mrk[], int sz)
{
     for (int x = 0; x < sz; x++)
    {
        cout << mrk [x] << endl;
    }
}

//Highest mark
void returnHihgestMark(int mrk[], int sz, int high)
{
    for (int i = 0; i < sz; i++)
    {
		if (mrk[i] > high)
        high = mrk[i];
    }
    cout <<"Highest: " << high <<endl;
}

//Lowest mark
void returnLowestMark(int mrk[], int sz, int low)
{
    for (int i = 0; i < sz; i++)
    {
        if (mrk[i] < low)
        low = mrk[i];
    }
    cout << "Lowest: " << low << endl;
}

//main program
const int SIZE = 5;

int main()
{
    int marks[SIZE];
    int highest = 0;
    int lowest = 0;

    //call functions
    getMarks(marks, SIZE);
    displayMarks(marks, SIZE);
    returnHihgestMark(marks, SIZE, highest);
    returnLowestMark(marks, SIZE, lowest);

    return 0;
}
