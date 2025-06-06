#include <iostream>
using namespace std;
int main()
{
    int i, ans = 1, n;
    cout << "Enter a number to find its product from 1 :";
    cin >> n;
    if (n == 0)
        cout << n;

    for (i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    cout << ans << endl;
}