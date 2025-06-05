#include <iostream>
using namespace std;
int main()
{
    int num, sum;
    cout << "Enter the digit to gain the sum of First and ladt digit : ";
    cin >> num;
    if (num < 10) // bug : if there is 1 digit entered, the sum gets double of that no.;
        cout << "The sum of First and last digit is : " << num;
    else
    {
        sum = num % 10;     // getting last digit
        while (!(num < 10)) // run loop until it get to last digit
        {
            num = num / 10;
        }
        sum += num; // adding the first and last number
        cout << "The sum of First and last digit is : " << sum;
    }
}
