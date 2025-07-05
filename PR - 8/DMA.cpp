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

int main(){
    LinkedList list;
    int action,index,value;
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
            return 0;
            // break;
            default:
                cout<<"----- Invalid option, Try Again; -----";
        } 
    }
}