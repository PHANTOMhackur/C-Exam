#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    float powerConsumption;

public:
    void setBrand(string b)
    {
        brand = b;
    }

    void setPower(float p)
    {
        powerConsumption = p;
    }

    string getBrand()
    {
        return brand;
    }

    float getPower()
    {
        return powerConsumption;
    }
};

class Laptop : public Device
{
public:
    void display()
    {
        cout << "Laptop" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power: " << getPower() << " W" << endl;
    }
};

class Smartphone : public Device
{
public:
    void display()
    {
        cout << "Smartphone" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power: " << getPower() << " W" << endl;
    }
};

int main()
{
    Laptop l;
    Smartphone s;

    l.setBrand("HP");
    l.setPower(65);

    s.setBrand("Samsung");
    s.setPower(25);

    l.display();
    cout << endl;
    s.display();

    return 0;
}