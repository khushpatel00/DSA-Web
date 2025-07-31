#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

class LinkedList {
    public:
    Node* head;
    int count;

    LinkedList(){
        head = NULL;
        count = 0;
    }
    void insert(int value){
        Node* newNode = new Node(value);
        if(head != NULL){
            Node* ptr = head;
            while(ptr->next != NULL) ptr = ptr->next;
            ptr->next = newNode;
        }
        else head = newNode;
        count++;
        cout<<"----- Node Created Successfully -----\n";
    }
    void view(){
        Node* ptr = head;
        while(ptr != NULL){
            cout<<ptr->value<<endl;
            ptr = ptr->next;
        }
    }
    void update(int index, int newValue){
        if(index < 0 || index >= count){
            cout<<"----- Invalid Position -----";
            return;
        }
        Node* ptr = head;
        for(int i = 0; i< index ; i++) ptr = ptr->next;
        ptr->value = newValue;
        cout<<"----- Node Updated -----\n\n";
    }
    void find(int value){
        Node* ptr = head;
        int index = 0;
        bool isValueFound = false;
        while (ptr != NULL)
        {
            if(ptr->value == value){
                cout<<"Element "<<value<<" found at index "<<index<<endl;
                isValueFound = true;
                break;
            }
            ptr = ptr->next;
            index++;
        }
        if(isValueFound == false) cout<<"Element "<<value<<" not availabke in list\n";   
    }
    void remove(int index){
        if(index < 0 || index >= count){
            cout<<"----- Index not Found -----\n";
            return;
        }
        Node* temp;
        // if(index == 0) head = head->next;
        if(index == 0) {
            temp = head;
            head = head->next;
        }
        else{
            Node* ptr = head;
            for(int i = 0; i < (index-1); i++) ptr = ptr->next; // using index-1, to get a step back from
            temp = ptr->next;
            ptr->next = temp->next;
        }
        count--;
        delete temp;
        cout<<"Node Deleted";
    }
};

class LinkedListMenu{
    public:
    LinkedList list;
    int action, index, value;
    void LinkedListMenuFunction(){
        while(1){
        cout<<"\n--------------------------------------\n";
        cout<<"1. Insert Element (last)\n2. View List\n3. Update at Position\n4. Delete at Position\n5. Find Element\n0. Exit\n\nEnter your Choice: ";
        cin>>action;
        cout<<"\n--------------------------------------\n";

            switch(action){
                case 1:
                    cout<<"Enter Value: ";
                    cin>>value;
                    list.insert(value);
                    break;
                break;
                case 2:
                    list.view();
                break;
                case 3:
                    cout<<"Enter Index to Update: ";
                    cin>>index;
                    cout<<"Enter new Value: ";
                    cin>>value;
                    list.update(index, value);
                break;
                case 4:
                    cout<<"Enter index to Remove: ";
                    cin>>index;
                    list.remove(index);
                break;
                case 5:
                    cout<<"Enter Element to Find: ";
                    cin>>value;
                    list.find(value);
                break;
                case 0:
                    cout<<"----- Thank You -----";
                return;
                // break;
                default:
                    cout<<"----- Invalid option, Try Again; -----";
            } 
        }
    }
};

class binarySearch{
    public:
        int n, arr[20], mid;
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
    void Search(){
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
        void printArray(){
            cout<<"\n\nArray: \n";
            for(int i=0; i<n;i++){
                cout<<"\n    arr["<<i<<"] = "<<arr[i];
            }
        }
};

class merge {
    public:
    void merger(int arr[], int l, int mid, int r) {
        int i = l, j = mid + 1, k = 0;
        int tempArr[100];

        while (i <= mid && j <= r) {
            if (arr[i] < arr[j]) {
                tempArr[k++] = arr[i++];
            } else {
                tempArr[k++] = arr[j++];
            }
        }

        while (i <= mid) tempArr[k++] = arr[i++];
        while (j <= r)   tempArr[k++] = arr[j++];

        for (int x = 0; x < k; x++) {
            arr[l + x] = tempArr[x];
        }
    }

    void mergeSort(int arr[], int l, int r) {
        if (l < r) {
            int mid = (l + r) / 2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);
            merger(arr, l, mid, r);
        }
    }

    void printArray(int arr[], int n) {
        cout << "\nSorted Array:\n";
        for (int i = 0; i < n; i++) {
            cout << "    arr[" << i << "] = " << arr[i] << endl;
        }
    }
};


class QuickSort {
public:
    void quickSort(int arr[], int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    int partition(int arr[], int low, int high) {
        int pivot = arr[high]; // last element as pivot
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }

    void printArray(int arr[], int n) {
        cout << "\nSorted Array (Quick Sort):\n";
        for (int i = 0; i < n; i++) {
            cout << "    arr[" << i << "] = " << arr[i] << endl;
        }
    }
};


int main() {
    LinkedListMenu listMenu;
    binarySearch binary;
    merge merge;
    QuickSort quick;

    int action;

    while (1) {
        cout << "\n\n\n1. Linked List Operations"
             << "\n2. Binary Search"
             << "\n3. Merge Sort"
             << "\n4. Quick Sort"
             << "\n5. Take Array Input"
             << "\n0. Exit"
             << "\nEnter your Choice: ";
        cin >> action;

        switch (action) {
            case 1:
                listMenu.LinkedListMenuFunction();
                break;
            case 2:
                binary.Search();
                break;
            case 3:
                merge.mergeSort(binary.arr, 0, binary.n - 1);
                merge.printArray(binary.arr, binary.n);
                break;
            case 4:
                quick.quickSort(binary.arr, 0, binary.n - 1);
                quick.printArray(binary.arr, binary.n);
                break;
            case 5:
                binary.arrayInput();
                break;
            case 0:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid option. Try again.\n";
        }
    }
}
