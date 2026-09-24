#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    float price;

public:
    void setBrand(string b)
    {
        brand = b;
    }

    void setPrice(float p)
    {
        price = p;
    }

    string getBrand()
    {
        return brand;
    }

    float getPrice()
    {
        return price;
    }

    virtual void calculateDiscount()
    {
        cout << "Discount: 0%" << endl;
    }
};

class Laptop : public Device
{
public:
    void calculateDiscount()
    {
        cout << "Laptop: " << getBrand() << endl;
        cout << "Price: " << getPrice() << endl;
        cout << "Discount: 10%" << endl;
    }
};

class Smartphone : public Device
{
public:
    void calculateDiscount()
    {
        cout << "Smartphone: " << getBrand() << endl;
        cout << "Price: " << getPrice() << endl;
        cout << "Discount: 15%" << endl;
    }
};

int main()
{
    Laptop l;
    Smartphone s;

    l.setBrand("HP");
    l.setPrice(60000);
    s.setBrand("Samsung");
    s.setPrice(30000);

    Device *d[2];
    d[0] = &l;
    d[1] = &s;

    d[0]->calculateDiscount();
    cout << endl;
    d[1]->calculateDiscount();

    return 0;
}