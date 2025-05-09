#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter a no. to create a table of it : ";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i<<endl;
    }
}