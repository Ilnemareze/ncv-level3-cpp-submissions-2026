//Programmer: Mew, I
//This programm is created using C++
/*This program calculates the amount due for the games the 17 year old
wants to purchase */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //Declare
    const float VAT = 0.15;
    const int GAME_PRICE = 15;
    int number_of_games;
    float sub_amount;
    float vat_amount;
    float amount_payable;

    //Input form user
    cout << "How many games do you want: " << endl;
    cin >> number_of_games;

    //Processing
    sub_amount = number_of_games * static_cast <float>(GAME_PRICE);
    vat_amount = sub_amount * VAT;
    amount_payable =sub_amount + vat_amount;

    //Output
    cout << "Sub amount: R " << fixed << setprecision(2) << sub_amount <<endl;
    cout << "VAT amount: R " << fixed << setprecision(2) << right << vat_amount <<endl;
    cout << "Amount payable: R " << fixed << setprecision(2) << amount_payable <<endl;

    return 0;
}
