#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "entre the no. of odd digits to print: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            cout << i << endl;
        }
    }
}