#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 20; i++)
    {
        if (!(i % j == 0))
        {
            cout << j << ". " << i << endl;
        }
    }
}