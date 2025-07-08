#include <iostream>
using namespace std;

class Stack{
    private:
        int *arr, top, cap;

    public:
        Stack(int size){
            cap = size;
            arr = new int[cap];
            top = -1;
        }
        bool isEmpty(){
            if(top == -1) return true;
            else return false;            
        }
        bool isFull(){
            if(top == (cap-1)) return true;
            else return false;
        }

        void push(int value){
            if(isFull()) cout<<"Stack is Full!!\nPush Failed!!";
            else arr[++top] = value;
        }
        int pop(){
            if(isEmpty()){ 
                cout<<"Stack is Empty!!\nPop failed!!";
                return -1;
            }else return arr[top--];
        }
        int topElement(){
            if(isEmpty()){
                cout<<"Stack is Empty!!\n";
                return -1;
            }
            else return arr[top];
        }
        void view(){
            if(isEmpty()) cout<<"Stack is Empty!! \n";
            else{
                cout<<"Stack Elemnts: ";
                for(int i = 0; i<= top; i++) cout<<arr[i]<<", ";
            }
        }

        ~Stack(){
            delete[] arr;
        }
};

int main(){
    int action, size, value;
    cout<<"Enter Stack Size: ";
    cin>>size;
    Stack stack(size); 
    while(true){
        cout<<"\n\n1. Push(add element)\n2. Pop(remove element)\n3. Top(get 1st Element)\n4. View(view all element)\n0. Exit\nEnter Your Choice: ";
        cin>>action;
        switch (action){
            case 1:
                cout<<"Enter value to push: ";
                cin>>value;
                stack.push(value);
            break;
            case 2:
                value = stack.pop(); // to recall the last recored value in  'int value'
                if(value != -1) cout<<"Popped Value: "<<value<<endl;
            break;
            case 3:
                value = stack.topElement();
                if(value != -1) cout<<"Top element is: "<<value<<endl;
            break;
            case 4:
                stack.view();
            break;
            case 0:
            cout<<"----- Thank You -----";
            break;
            default:
                cout<<"Invalid Choice!, Try again";
            break;
        }
    }
}


