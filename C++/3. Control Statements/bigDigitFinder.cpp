#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter value of A : ";
    cin>>a;
    cout<<"Enter value of B : ";
    cin>>b;
    cout<<"Enter value of C : ";
    cin>>c;

    if(a==b & b==c){
        cout<<"All are Same !!";
    }
    else if(a==b){
        cout<<"A and B are same";
    }
    else if(b==c){
        cout<<"B and C are Same";
    }
    else if(a > b){
        if(a > c){
            cout<<"A is Max\n";
        }
        else{
            cout<<"C is Max\n";
        }
    }
    else{
        if(b > c){
            cout<<"B is Max\n";
        }
        else{
            cout<<"C is Max\n";
        }
    }
}
