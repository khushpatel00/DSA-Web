#include <iostream>
using namespace std;

int main()
{
    int grade;

    cout << "Enter your Grade: ";
    cin >> grade;

    if (grade >= 90)
    {
        cout << "You Got an A";
    }
    else if (grade >= 80)
    {
        cout << "Your Grade is B";
    }
    else if (grade >= 65)
    {
        cout << "You got an C";
    }
    else if (grade >= 50)
    {
        cout << "You got an D";
    }
    else if (grade >= 37.5)
    {
        cout << "You Got an E";
    }
    else
    {
        cout << "You Failed !!";
    }
    return 0;
}