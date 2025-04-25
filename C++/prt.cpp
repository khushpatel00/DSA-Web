#include <iostream>
using namespace std;

int main(){
    float in, ans;
    cout<<"enter the principle amount : ";
    cin>>in;
    ans = in;
    cout<<"enter the Interest amount : ";
    cin>>in;
    ans += in;
    cout<<"enter the time for interest : ";
    cin>>in;
    ans += in;

    cout<<"the total amount will be : "<<ans;
    return 0;

    

}