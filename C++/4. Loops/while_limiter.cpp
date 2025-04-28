#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter any value less than 10 : ";
    cin >> a;
    while (a > 10)
    {   
        cout<<"\n\nthe value is greater than 10, Try again\n\n";
        cout << "enter any value less than 10 : ";
        cin >> a;
    }
    cout<<"the recorded value is "<<a<<endl;
}