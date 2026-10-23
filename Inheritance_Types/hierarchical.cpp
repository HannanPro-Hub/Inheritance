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
    string getName()
    {
        return name;
    }
};

class Student : public Person
{
private:
    int rollNumber;

public:
    Student(string name, int rollNumber) : Person(name)
    {
        this->rollNumber = rollNumber;
    }
    void studentData()
    {
        cout << "--- Student Data ---\n";
        cout << "Student Name : " << getName() << endl;
        cout << "Student Roll.no : " << rollNumber << endl;
    }
};

class Teacher : public Person
{
private:
    string subject;

public:
    Teacher(string name, string subject) : Person(name)
    {
        this->subject = subject;
    }
    void teacherData()
    {
        cout << "\n--- Teacher Data ---\n";
        cout << "Teacher Name : " << getName() << endl;
        cout << "Teacher Subject : " << subject << endl;
    }
};

int main()
{
    Student st1("Hannan", 801);
    Teacher te1("Laiba", "English");
    st1.studentData();
    te1.teacherData();
    return 0;
}