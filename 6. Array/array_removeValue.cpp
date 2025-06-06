#include <iostream>
using namespace std;
int main(){
    int i,n=5,arr[5] = {10,20,30,40,50};
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int index = 2;
    
    arr[index] = 0;
    for(i=index;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    for(i=0, n--;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
