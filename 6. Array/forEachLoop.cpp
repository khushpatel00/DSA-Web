#include <iostream>
using namespace std;
int main(){
    int noOfElement,i;
    cout<<"Enter the number of element in array : ";
    cin>>noOfElement;
    int arr[noOfElement];
    for(i=0;i<noOfElement;i++){
        cout<<"a["<<i<<"] = ";
        cin>>arr[i];
    }
    for(int num:arr) cout<<num<<endl;
    
    return 0;   
}