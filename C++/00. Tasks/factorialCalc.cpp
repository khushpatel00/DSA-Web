#include <iostream>
using namespace std;

int main(){
    int fact,i=1,n;
    cout<<"Enter a number To Get a factorial of : ";
    cin>>n;
    for(fact = 1; i <= n; i++) fact*=i;
    cout<<"the factorial of "<<n<<" is "<<fact<<endl;
} 