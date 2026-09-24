#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound();
    virtual void move();
};

class Lion : public Animal
{
public:
    void makeSound()
    {
        cout << "Lion: Roar" << endl;
    }

    void move()
    {
        cout << "Lion is running" << endl;
    }
};

class Fish : public Animal
{
public:
    void makeSound()
    {
        cout << "Fish makes bubbles" << endl;
    }

    void move()
    {
        cout << "Fish is swimming" << endl;
    }
};

int main()
{
    Lion l;
    Fish f;

    Animal *a[2];
    a[0] = &l;
    a[1] = &f;
    a[0]->makeSound();
    a[0]->move();

    cout << endl;

    a[1]->makeSound();
    a[1]->move();

    return 0;
}