#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    Person(string name)
    {
        this->name = name;
    }

    void displayName()
    {
        cout << "Name : " << name << endl;
    }
};

class Student : public Person
{
private:
    int rollNumber;

public:
    Student(string name, int rollNumber)
        : Person(name)
    {
        this->rollNumber = rollNumber;
    }

    void displayRollNumber()
    {
        cout << "Roll Number : " << rollNumber;
    }
};

int main()
{
    Student s("Hannan", 101);
    s.displayName();
    s.displayRollNumber();
    return 0;
}