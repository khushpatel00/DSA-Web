#include <iostream>
#include <fstream>
using namespace std;
class server{
    private:
    int write(string holder, int accNo, float bal){
        fstream serverDatabase;
        serverDatabase.open("serverDatabase.txt", ios::out);
        serverDatabase << holder <<", "<< accNo <<", " << bal <<endl;

    }
    public:
    void createAccount(){
        int accNo;
        float accBalance;
        string accHolder;

        cout << "Enter Account Holder Name: ";
        cin >> accHolder;
        cout << "Enter Account No.: ";
        cin >> accNo;
        cout << "Enter Account balance: ";
        cin >> accBalance;
        write(accHolder, accNo, accBalance);
    }
};
int main()
{
    server s;
    int action;
    while (1)
    {
        // fstream serverDatabase;
        // serverDatabase.open("serverDatabase.txt", ios::out);
        cout << "1. Create Account\n2. Account Info\n3. Deposit Money\n4. Withdraw Money\n0. Exit\nEnter Your Choice: ";
        cin >> action;
        if (action == 0)
            return 0;
        else
        {
            switch (action)
            {
            case 1:
                s.createAccount();
                break;
            case 2:
                cout << "\n--- Getting Info ---\n\n";
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