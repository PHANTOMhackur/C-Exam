#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;

public:
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    Student s[3] = {
        Student("Ismail", 101),
        Student("Hussain", 102),
        Student("Ali", 103)
    };

    for(int i = 0; i < 3; i++)
    {
        s[i].display();
        cout << endl;
    }

    return 0;
}