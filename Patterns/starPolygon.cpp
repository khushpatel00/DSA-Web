#include<iostream>
using namespace std;

int main(){
    int i,j,s;
    for(i=1;i<=4;i++){
        for(s=4;s>i;s--) cout<<"  ";
        for(j=1;j<=i;j++) cout<<"* ";
        for(j=1;j<i;j++) cout<<"* ";
        cout<<endl;
    }
    for(i=3;i>=1;i--){
        for(s=3;s>=i;s--) cout<<"  ";
        for(j=1;j<=i;j++) cout<<"* ";
        for(j=1;j<i;j++) cout<<"* ";
        cout<<endl;
    }
}
