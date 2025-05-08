#include <iostream>
using namespace std;
int main()
{
    int i, ans = 1;
    cout << "5! = ";
    for (i = 5; i >= 1; i--)
    {
        ans = i * ans;
    }
    cout << ans << endl;
}