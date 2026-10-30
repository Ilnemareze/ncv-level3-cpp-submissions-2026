//Programmer: Mew, I
//This program is created using C++

#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    //Class definition section
    string name;
    double price;
    int quantityInStock;
public:
    Product();   //Default constructor
    //Person(string nm, int ag, char gn);
    void setProduct(string nm, double p, int qis);    //setter
    string getName();    //getter
    double getPrice();    //getter
    int getQuantityInStock();     //getter
};

//Class implimentation section
Product::Product()   //method Person() belongs to Class Person, :: scope resolution operator (binds a method to a specific class
{
    name = " ";
    price = 0;
    quantityInStock = 0;
}

void Product::setProduct(string nm, double p, int gis)  //Takes data from outside world and assigns
{
    //Validation
    if
        (nm == " ");
    else
        name = nm;
    if
        (p < 0);
    else
        price = p;
    if
        (gis < 0);
    else
        quantityInStock = gis;
}

string Product::getName()
{
    return name;
}

double Product::getPrice()
{
    return price;
}

int Product::getQuantityInStock()
{
    return quantityInStock;
}

int main()
{
    Product pr;   //Created an instance of a person - default constructor called automatical
    pr.setProduct("Milk", 15.00, 2);

    cout <<"Name: " <<pr.getName() << endl;
    cout <<"Price: " <<pr.getPrice() << endl;
    cout <<"Quantity in stock: " <<pr.getQuantityInStock() << endl;

    return 0;
}
