#include <iostream>
using namespace std;

int main(){
    float rawValue1, rawValue2;
    // float ans;
    int function;
    cout<<"This Program will help You Calculate Your Given Valus\n";

    cout<<"\nEnter value 1 : ";
    cin>>rawValue1;
    cout<<"\nEnter value 2 : ";
    cin>>rawValue2;

    cout<<"What you want to do with this values? \n provide your answer as of the options given below.\n";


    cout<<"1. Addition       ( + )\n";
    cout<<"2. Substraction   ( - )\n";
    cout<<"3. Multiplication ( * )\n";
    cout<<"4. Division       ( / )\n";
    cout<<"5. Modulos        ( % )\n";

    cin>>function;
    switch (function)
    {
    case 1:
        cout<<"The Addition of '"<<rawValue1<<"' and '"<<rawValue2<<"' is : "<<rawValue1 + rawValue2<<endl;
        break;
    case 2:
        cout<<"The Substraction of '"<<rawValue1<<"' and '"<<rawValue2<<"' is : "<<rawValue1 - rawValue2<<endl;
        break;
    case 3:
        cout<<"The Multiplication of '"<<rawValue1<<"' and '"<<rawValue2<<"' is : "<<rawValue1 * rawValue2<<endl;
        break;
    case 4:
        cout<<"The Division of '"<<rawValue1<<"' and '"<<rawValue2<<"' is : "<<rawValue1 / rawValue2<<endl;
        break;
    // case 5:
    //     cout<<"The Modulos of '"<<rawValue1<<"' and '"<<rawValue2<<"' is : "<<(rawValue1 % rawValue2);
    //     break;
    
    default: 
        cout<<"Invalid Choice !! "; 
        break;
    }
}