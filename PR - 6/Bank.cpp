#include <iostream>
#include <fstream>

using namespace std;
class server{

    private:
        void write(string holder, long int accNo, float bal){
            string txtExtension = ".txt";
            fstream serverDatabase;
            string filename = to_string(accNo) + txtExtension; // Create a file named with acc number
            ofstream DatabaseFile(filename);
            DatabaseFile << "Account Holder: " << holder << "\n";
            DatabaseFile << "Account No.: " << accNo << "\n";
            DatabaseFile << "Account Balance: " << bal << "\n";
        }

    public:
    int accountCount = 0; // to start counting from 0 (used in index)
        int createAccount(){
            long int accNo; // if user gives long account no. 
            float accBalance;
            string accHolder;

            cout << "Enter Account Holder Name: ";
            cin >> accHolder;
            cout << "Enter Account No.: ";
            cin >> accNo;
            cout << "Enter Account balance: ";
            cin >> accBalance;


            accountCount++; // number used while deleting all database files

            write(accHolder, accNo, accBalance);

            return accNo;
        }
        void getInfo(long int accNo){
            string InfoPrinter;
            // ifstream serverDatabase;
            ifstream in(to_string(accNo) + ".txt");
            // cout<<getline(in, InfoPrinter);
            getline(in, InfoPrinter);
            cout<<endl<<"------------------------------------------"<<endl;
            cout<<InfoPrinter<<endl;
            getline(in, InfoPrinter);
            cout<<InfoPrinter<<endl;
            getline(in, InfoPrinter);
            cout<<InfoPrinter;
            cout<<"\n------------------------------------------\n\n";
        }

        int destroyAccountData(int AccNo[] = {}){
            cout<<"------------------------------\n          Destroying\n------------------------------";
            string filename;
            for(int i=0; i<=accountCount; i++){
                filename = to_string(AccNo[i]) + ".txt"; 
                remove(filename.c_str()); // remove file with the name of account number
            }
        }
};
int main(){
    server s;
    int allAccNo[100];
    int action,temp;
    long int accNo;
    while (1){
        // fstream serverDatabase;
        // serverDatabase.open("serverDatabase.txt", ios::out);
        cout << "1. Create Account\n2. Account Info\n3. Deposit Money\n4. Withdraw Money\n0. Exit\nEnter Your Choice: ";
        cin >> action;
        if (action == 0){
            cout<<"------ Do you want to Delete All Userdata and Accounts Made (During this Session Only)? ------";

            for(int i = 0; i < s.accountCount; i++){
                cout << "Account No. " << allAccNo[i] << " is being destroyed.\n";
            }
            s.destroyAccountData(allAccNo);
            return 0;



        }
        else{
            switch (action){
            case 1:
                allAccNo[s.accountCount] = s.createAccount(); // calling function inside a assigning value, to store in array, used when destroying filw
                break;
            case 2:
                cout<<"Enter Account No.: ";
                cin>>accNo;
                s.getInfo(accNo);
                break;
            case 3:
                cout << "\n--- Depositing Money ---\n\n";
                break;
            case 4:
                cout << "\n--- Withdrawing Money ---\n\n";
                break;
            default:
                cout << "\n--- Invalid Choice, Try Again ---\n\n";
                break;
            } // switch
        } // else
    } // while(infinite)
} // main