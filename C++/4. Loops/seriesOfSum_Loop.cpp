#include <iostream>
using namespace std;

int main(){
    int sum=0,n,i;
    cout<<"Enter the number to make the sum in series : ";
    cin>>n;

    for(i=1;i<=n;i++){
        sum+=i;
        cout<<sum<<endl;
    }
}