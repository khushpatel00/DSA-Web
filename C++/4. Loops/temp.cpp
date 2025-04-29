#include <iostream>
using namespace std;
int main(){
    int sum=0,n;
    for(n=1;n<=5;n++){
        sum+=n;
        cout<<sum<<endl;
    }
}

//  n = 1, sum = 0        ::1
//  n = 2, sum = 1        ::3
//  n = 3, sum = 3        ::6
//  n = 4, sum = 6        ::10
//  n = 5, sum = 10       ::15