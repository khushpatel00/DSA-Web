#include <iostream>
using namespace std;
int main()
{
    int i, ans = 0;
    for (i = 0; i <= 100; i += 2) // or (i = 2;i<=100;i++) if(i%2 = 0) {ans+=i;}
        ans += i;
    cout << ans << endl;
}