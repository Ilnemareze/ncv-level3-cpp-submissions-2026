//Programmer: Mew, I
//This program was created using C++

#include <iostream>

using namespace std;

//Populate the 5 marks
void populateMarks(int fmarks[], int fsize)
{
	for (int i = 0; i < fsize; i++)
    {
        cout <<"Enter mark " << i + 1 << ": ";
        cin >>fmarks[i];
    }
}

//Display all populated marks
int displayAllMarks(int fmarks[], int fsize)
{
	cout << "All marks: ";
    for (int i = 0; i < fsize; i++)
    {
		cout << fmarks[i] << " " << " ";
    } 
    return 0;
}

//Count how many even marks
int countEvenMarks(int fmarks[], int fsize, int fcount)
{
	cout << "Number of even marks: " ;
    for (int i = 0; i < fsize; i++)
    {
		if (fmarks[i] % 2 == 0)
        {
			cout << fmarks[i] << " ";
			fcount = i + 1;
		}             
    }
    return 0;
}

//Display all the odd marks
int displayOddMarks(int fmarks[], int fsize)
{
	cout << "Odd marks: " ;
    for (int i = 0; i < fsize; i++)
    {
        if (fmarks[i] % 2 != 0)
        {
			cout << fmarks[i] << " ";
			i++; 
		}              
    }
    return 0;
}

//Sort all the marks in ascending order
int sortMarks(int fmarks[], int fsize)
{
	for (int i = 0; i < fsize; i++)
	{	
		if (fmarks[i] > fmarks[i + 1])
		{
			int ftemp = fmarks[i];
			fmarks[i] = fmarks[i + 1];
			fmarks[i + 1] = ftemp;
		}
	}
	return 0;
}

//Display all the sorted marks
int displaySortMarks(int fmarks[], int fsize)
{
	cout << "All marks sorted: ";
    for (int i = 0; i < fsize; i++)
    {
		cout << fmarks[i] << " ";
    } 
    return 0;
}

const int SIZE = 5;

int main()
{
	//Declare
	int marks[SIZE];
	int marks;
	int size = 0;
	int count = 0;
		 
	//Call the functions
	populateMarks(marks, size);
	displayOddMarks(marks, size);
	countEvenMarks(marks, size, count);
	sortMarks(marks, size);
	displaySortMarks(marks, size);
        
 	return 0;    
}
