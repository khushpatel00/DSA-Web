#include <iostream>
using namespace std;
int main(){
    char ch = 'a';
    do{
        cout<<ch<<", ";
        ch+=4;  //skipping th characters 
    }while(ch <= 'z');
}