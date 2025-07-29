#include <iostream>
using namespace std;

class sort{
    public:
    int n, temp, arr[10];
    void arrayInput(){
        cout<<"Enter the no. of Elements: ";
        cin>>n;
        arr[n];
        cout<<"Enter Elements";
        for(int i = 0; i<n; i++){
            cout<<"arr["<<i<<"] = ";
            cin>>arr[i];
        }
        printArray();
    }
    void printArray(){
        cout<<"\n\nArray: \n";
        for(int i=0; i<n;i++){
            cout<<"\n    arr["<<i<<"] = "<<arr[i];
        }
    }
    void selectionSort(){
        for(int i = 0; i<n-1;i++){
            for(int j = 1 + 1; j < n; j++){ 
                if(arr[i] > arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout<<"Sorted array Using Selection Sort: ";
        printArray();
    }
    void mergeSort(int arr[], int length, int r){
        if(r > 0){
            int mid = (length + r) / 2;
            mergeSort(arr, length, mid);
            mergeSort(arr, mid + 1, r);
            merge(arr, length, mid, r);
        }
    }
    void merge(int arr[], int length, int mid, int r){
        int i = length, j = mid + 1, k = 0;
        int tempArr[n];
        while(i <= mid && j <= r){
            if(arr[i] < arr[j]){ 
                tempArr[k] = arr[i];
                i++;
            }
            else {
                tempArr[k] = arr[j];
                j++;
            }
            k++;
        }
        while(i <= mid){
            tempArr[k] = arr[i];
            i++;
            k++;
        }
        while(j <= r) {
            tempArr[k] = arr[j];
            j++;
            k++;
        }

        for(int x = 0; x < k; x++){
            arr[length + x] = tempArr[x];
        }
    }
    void linearSearch(){
        int key;
        cout<<"Enter Element to search: ";
        cin>>key;
        for(int i = 0; i < n; i++) if(arr[i] == key){
            cout<<"Elements Found at index "<<i;
            return;
        }
        cout<<"Element not found\n";
    }
    void binarySearch(){
        int key, low = 0, high = n - 1,mid;
        cout<<"Enter Element to search: ";
        cin>>key;
        while(low <= high){
            mid = (low + high) / 2;
            if(arr[mid] == key){
                cout<<"Element Found At index "<<mid;
                return;
            }
            else if (arr[mid] < key) low = mid +1;
            else high = mid - 1; 
        }
        cout<<"Element not Found\n";
    }

};


int main(){
    sort sort;
    int action = -1, confirmation;
    while(action != 0){
        cout<<"\n\n\n1. Enter Array\n2. Selection Sort\n3. Merge Sort\n4. Linear Search\n5. Binary Seacrh\n0 (or CTRL + C). Exit\n\nEnter Your Choice: ";
        cin>>action;

        switch(action){
            case 1:
                sort.arrayInput();
                break;
            case 2:
                sort.selectionSort();
                break;
            case 3:
                sort.mergeSort(sort.arr , 0, sort.n-1);
                break;
            case 4:
                sort.linearSearch();
                break;
            case 5:
                cout<<"Binary Search Needs the array to be sorted\n\nPress 'Y' if array is sorted\nPress 'N' to sort the array : ";
                cin>>confirmation;
                if(confirmation == ('Y' || 'y')) sort.binarySearch();
                else sort.selectionSort();
                break;
            case 0:
                cout<<"Exiting...\n\n";
                return 0;            
        }
    } 
}