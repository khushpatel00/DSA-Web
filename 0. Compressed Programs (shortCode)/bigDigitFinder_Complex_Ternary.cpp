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
    
    // SAME PROGRAM WITH EASIER STEPS TO UNDERSTAND

    // if(a > b){
    //     if(a > c){
    //         cout<<"A is Max\n";
    //     }
    //     else{
    //         cout<<"C is Max\n";
    //     }
    // }
    // else{
    //     if(b > c){
    //         cout<<"B is Max\n";
    //     }
    //     else{
    //         cout<<"C is Max\n";
    //     }
    // }

    // TERNERY OPERATOR (COMPLEX)
    a>b ? a>c ? cout<<"A is Max" : cout<<"C is Max" : b>c ? cout<<"B is Max" : cout<<"C is Max";
}