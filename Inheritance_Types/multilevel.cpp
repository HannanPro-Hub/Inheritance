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
        cout << "Roll Number : " << rollNumber << endl;
    }
};

class Graduate : public Student
{
private:
    string degree;

public:
    Graduate(string name, int rollNumber, string degree)
        : Student(rollNumber)
    {
        this->degree = degree;
    }

    void displayDegree()
    {
        cout << "Degree : " << degree;
    }
};

int main()
{
    Graduate st1("Hannan", 701, "Computer Science");
    st1.displayName();
    st1.displayRollNumber();
    st1.displayDegree();
    return 0;
}