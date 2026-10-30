//Programmer: Mew, I
//This program is created using C++

#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    string name;
    double price;
    int quantityInStock;
public:
    Product();
    void setProduct(string nm, double p, int qis);
    string getName();
    double getPrice();
    int getQuantityInStock();
};

Product::Product()
{
    name = " ";
    price = 0;
    quantityInStock = 0;
}

void Product::setProduct(string nm, double p, int gis)
{
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

void getProductData(Product &pr)
{
    string nm;
    double p;
    int gis;

    cout <<"Enter name: ";
    cin >>nm;
    cout <<"Enter price: ";
    cin >>p;
    cout <<"Enter amount of stock: ";
    cin >>gis;

    pr.setProduct(nm, p, gis);
}

void displayProduct(Product &pr)
{
    cout <<"Name: " <<pr.getName() << endl;
    cout <<"Price: " <<pr.getPrice() << endl;
    cout <<"Stock: " <<pr.getQuantityInStock() << endl;
}

void prodCompare(Product &pr)
{
    string name2 = "Milk";
    string name = pr.getName();

   if (name2.at(0) == pr.getName().at(0))
        cout <<"Same first letter.";
    else
        cout <<"NOT same leter.";
}

int main()
{
    Product pr;

    getProductData(pr);
    displayProduct(pr);
    prodCompare(pr);

    return 0;
}
