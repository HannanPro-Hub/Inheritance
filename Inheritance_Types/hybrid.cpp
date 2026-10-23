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
    int getRollNumber()
    {
        return rollNumber;
    }
};

class Sports
{
private:
    int sportsScore;

public:
    Sports(int sportsScore)
    {
        this->sportsScore = sportsScore;
    }
    int getSportsScore()
    {
        return sportsScore;
    }
};

class Result : public Student, public Sports
{

public:
    Result(string name, int rollNumber, int sportsScore) : Student(name, rollNumber), Sports(sportsScore)
    {
    }

    void showData()
    {
        cout << "Student Name : " << getName() << endl;
        cout << "Student Roll Number : " << getRollNumber() << endl;
        cout << "Student Sports Score : " << getSportsScore() << endl;
        cout << "Result Displayed" << endl;
    }
};

int main()
{
    Result st1("Hannan", 3294, 18);
    st1.showData();
    return 0;
}