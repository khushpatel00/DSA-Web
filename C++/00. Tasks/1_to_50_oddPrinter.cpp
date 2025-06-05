#include <iostream>
using namespace std;

// series of 1 to 50 (odd only)

int main()
{
    int i;
   
    for (i = 1; i <= 50; i++)
    {
        if (i % 2) // or (i % 2 = 0)
        {
            cout << i << endl;
        }
    }
}