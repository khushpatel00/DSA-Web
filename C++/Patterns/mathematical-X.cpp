#include <iostream>
using namespace std;
int main()
{
    int i, j, v=1, rv=9;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if ((i == v && j == v) || (i == v && j == rv)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
        v++;
        rv--;
    }
}
