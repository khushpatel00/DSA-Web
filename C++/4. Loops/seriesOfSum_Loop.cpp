#include <iostream>
using namespace std;

int main(){
    int n,i,sum = 1;
    cout<<"Enter the number to make the sum in series : ";
    cin>>n;
    // cout<<"enter the initial value to start the sum from (default : 1) : ";
    // cin>>sum;

    for(i=1;i<=n;i++){
        // cout<<"1. "<<(sum-sum/2)<<" + "<<sum<<" = "<<(sum+=sum)<<endl;
        cout<<"sum = "<<sum<<endl;
        sum+=i; 
    }
    cout<<"\n\n\n=================== end of code ======================\n\n";
}