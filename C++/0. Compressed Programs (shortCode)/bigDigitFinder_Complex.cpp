#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    
    cout<<"Enter Value A: ";
    cin>>a;
    cout<<"Enter Value B: ";
    cin>>b;
    cout<<"Enter Value C: ";
    cin>>c;

    if(a==b && b==c){cout<<"All are Same !!";}
    else if(a==b){cout<<"A & B are Same";}
    else if(b==c){cout<<"B & C are Same";}
    else if(a==c){cout<<"A & C are Same";}
    else if(a>b && a>c){cout<<"A is Max";}
    else if(b>a && b>c){cout<<"B is Max";}
    else if(c>a && c>b){cout<<"C is Max";}
}