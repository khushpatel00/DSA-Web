#include <iostream>
using namespace std;



class Server{
    private:
        int serverAccNo, serverAmount;
        string serverHolderName;
    public:
        void bank(string serverHolderName, int serverAccNo, int serverAmount){
            this->serverHolderName = serverHolderName;
            this->serverAccNo = serverAccNo;
            this->serverAmount = serverAmount;
        }
        int accFinder(int accNo, int iterations){
            for(int i=0; i<=iterations; i++){
                if(serverAccNo == accNo) return i;
            }
            return -1;
        }
        int getIndex(int accNo, int iterations){
            // int indexOfAccount = accFinder(accNo, iterations);
            // return indexOfAccount;
            
            int accountIndex = accFinder(accNo, iterations);
            if(accountIndex = -1) cout<<"------ Account not Found ------ ";
            else return accountIndex;
        }
        void callDetails(){
            cout<<"\nAccount Holder Name: "<<serverHolderName;
            cout<<"\nAccount no.: "<<serverAccNo;
            cout<<"\nAmount in Account: "<<serverAmount;
        }
};



int main(){
    Server s[50];
    int action,amount,accNo, iterationCount = 0;
    string holderName;
    cout<<"\n\n-------------------------------------------------";
    cout<<"\n\n---------------------- SBI ----------------------";
while(1){
    cout<<"\n\n-------------------------------------------------\n\n";
        cout<<"1. Create Account"<<endl<<"2. Deposit amount"<<endl<<"3. Withdraw amount"<<endl<<"4. Account details"<<endl<<"0 (or CTRL + C). Exit \n";
            cout<<"Enter your choice : ";
        cin>>action;

        if(action == 0) return 0; // exiting program directly, without running the program again
        else{
            switch (action){
            case 1:
                cout<<"\n--- Creating Account ---\n\n";
                cout<<"Enter Account Holder's name: ";
                cin>>holderName;
                cout<<"Enter Account no. : ";
                cin>>accNo;
                cout<<"Enter Amount : ";
                cin>>amount;
                s[iterationCount++].bank(holderName,accNo,amount);
                break;
            case 2:
                cout<<"\n--- Deposit Amount ---\n\n";
                cout<<"Enter account no. : ";
                cin>>accNo;
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                break;
            case 3:
                cout<<"\n--- Withdraw Amount ---\n\n";
                cout<<"Enter account no. : ";
                cin>>accNo;
                cout<<"Enter amount to withdraw : ";
                cin>>amount;
                break;
            case 4: 
                cout<<"\n--- Account Details ---\n\n";
                cout<<"Enter account no. : ";
                cin>>accNo;
                // s[] = s->getDetails(accNo, iterationCount);
                s[s->getIndex(accNo, iterationCount)].callDetails();

                
            default:
                break;
            } // switch
        } // else
    } // while (infinite)
} // main