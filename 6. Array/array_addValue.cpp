#include <iostream>
using namespace std;
int main(){
    int i,n = 5, arr[6] = {10,20,30,40,50};
    for(i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    int index = 2, value = 25;
    for(i=n ;i>index;i--){
        arr[i] = arr[i-1];
    }

    arr[index] = value;

    for(i=0, n++; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}