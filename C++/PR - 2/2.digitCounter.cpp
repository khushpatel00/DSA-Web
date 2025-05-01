// counting the number of digits in a number 
#include <iostream>
using namespace std;
int main()
{
    int count = 0; // initial valeu
    long int num; // fixes the error of limitation, allows more digits to count 
    cout << "enter a number to count its digits : ";
    cin >> num;

    cout << "the no. of digits in " << num << " is "; // this adds the num variabl in printing because it will be 0 after running the loop

    if (num == 0)  // checks if user has added any non integer (or 0 integer)
        count = 0; // if it has 0 count, the count is set to 0;
    else
    {
        while (num != 0)
        {
            num = num / 10; // remove 1 digit every time this line runs;
            count++;        // adds 1 more in count unitl num reaches 0
        }
    }
    // cout<<"the no. of digits in "<<num<<" is "<<count;
    cout << count; // the last count printed after 1st cout;
}