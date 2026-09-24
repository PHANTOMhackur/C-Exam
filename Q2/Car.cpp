#include <iostream>
using namespace std;

class Car
{
private:
    string model;
    int year;
    float speed;

public:
    void setModel(string m)
    {
        model = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    void setSpeed(float s)
    {
        speed = s;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    float getSpeed()
    {
        return speed;
    }
};

int main()
{
    Car c;
    c.setModel("BMW");
    c.setYear(2024);
    c.setSpeed(180);
    cout << "Model: " << c.getModel() << endl;
    cout << "Year: " << c.getYear() << endl;
    cout << "Speed: " << c.getSpeed() << " km/h" << endl;

    return 0;
}