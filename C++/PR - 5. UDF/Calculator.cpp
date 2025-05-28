#include <iostream>
using namespace std;
int userinput();
int calculation(int action);

int main(){
    userinput();
}    

int userinput(){
    int action;
    cout<<"Press 1 for +"<<endl;
    cout<<"Press 2 for -"<<endl;
    cout<<"Press 3 for *"<<endl;
    cout<<"Press 4 for /"<<endl;
    cout<<"Press 5 for %"<<endl;
    cout<<"Press 0 for exit \n\n Enter Your Choice: ";
    cin>>action;
    if(action == 0) return 0;
    else calculation(action);
}

int calculation(int action){ // using the same name for no confusion
    //input
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    // calculation
    switch(action){
        case 1:
            cout<<"Addition of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
            break;
        case 2:
            cout<<"Subtraction of "<<a<<" and "<<b<<" is: "<<a-b<<endl;
            break;
        case 3:
            cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<a*b<<endl;
            break;
        case 4:
            if(b!=0) cout<<"Division of "<<a<<" and "<<b<<" is: "<<a/b<<endl;
            else cout<<"Error, cant divide by 0"<<endl;
            break;
        case 5:
            cout<<"Modulus of "<<a<<" and "<<b<<" is: "<<a%b<<endl;
            break;
        case 0:
            return 0;
            break;
        default:
            cout<<"Invalid choice, please try again."<<endl;
            break;  
    }
}