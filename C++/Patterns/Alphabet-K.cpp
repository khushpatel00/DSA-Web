#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || (j == 2 && (i == 3 || i == 4)) || (j == 3 && (i == 2 || i == 5)) || (j == 4 && (i == 1 || i == 6)) )
            {
                cout << "* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
