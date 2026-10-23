#include <iostream>
using namespace std;

class Academic
{
private:
    int marks;

public:
    Academic(int marks)
    {
        this->marks = marks;
    }

    void showMarks()
    {
        cout << "Marks : " << marks << endl;
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

    void showSportsScore()
    {
        cout << "Sports Score : " << sportsScore << endl;
    }
};

class Result : public Academic, public Sports
{
private:
public:
    Result(int marks, int sportsScore) : Academic(marks), Sports(sportsScore)
    {
    }
    void showFinalResult()
    {
        cout << "Final Result Displayed";
    }
};

int main()
{
    Result st1(35, 23);
    st1.showMarks();
    st1.showSportsScore();
    st1.showFinalResult();
    return 0;
}