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

class Exam
{
private:
    int examMarks;

public:
    Exam(int examMarks)
    {
        this->examMarks = examMarks;
    }
    int getMarks()
    {
        return examMarks;
    }
};

class Student : public Person, public Exam
{
public:
    Student(string name, int examMarks) : Person(name), Exam(examMarks)
    {
    }
    void showFinalResult()
    {
        cout << "Student Name : " << name << endl;
        cout << "Student Marks : " << examMarks;
    }
};

int main()
{
    Student st1("Abdul Hannan", 23);
    st1.showFinalResult();
    return 0;
}