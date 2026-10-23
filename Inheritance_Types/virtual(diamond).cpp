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

class Student : virtual public Person
{
private:
    int rollNumber;

public:
    Student(string name, int rollNumber) : Person(name)
    {
        this->rollNumber = rollNumber;
    }
    int getRollNumber()
    {
        return rollNumber;
    }
};

class Teacher : virtual public Person
{
private:
    string subject;

public:
    Teacher(string name, string subject) : Person(name)
    {
        this->subject = subject;
    }
    string getSubject()
    {
        return subject;
    }
};

class TeachingAssistant : public Student, public Teacher
{

public:
    TeachingAssistant(string name, int rollNumber, string subject) : Person(name), Student(name, rollNumber), Teacher(name, subject)
    {
    }

    void showData()
    {
        cout << "Name : " << getName() << endl;
        cout << "Roll Number : " << getRollNumber() << endl;
        cout << "Subject : " << getSubject() << endl;
    }
};

int main()
{
    TeachingAssistant t1("Hannan", 701, "English");
    t1.showData();
    return 0;
}