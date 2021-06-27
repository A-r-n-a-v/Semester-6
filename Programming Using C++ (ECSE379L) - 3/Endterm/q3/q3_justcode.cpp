#include <iostream>

using namespace std;

class Account {
    private:
        int account_balance;
        
    public:
        int rate_of_interest, holding_time;
    
        Account(int i, int r, int ht) {
            account_balance = i;
            rate_of_interest = r;
            holding_time = ht;
        }
        
        void deposit(int amount) {
            account_balance += amount; 
        }   
        
        void withdraw(int amount) {
            account_balance -= amount;
        }
        
        int calculateInterest() {
            return (account_balance*rate_of_interest*holding_time)/100;
        }
        
        int getBalance() {
            return account_balance;
        }
        
        char choose() {
            char c;
            cout << "PLEASE SELECT AN OPTION=";
            cin >> c;
            cout << c << endl;
            
            return c;
        }
};

int main()
{
    cout << "ALL THE ENTRIES MUST BE MADE WITH UPPERCASE LETTERS ONLY" << endl;
    
    int iBal, roi, hTime;
    
    cout << "ENTER THE INITIAL BALANCE=";
    cin >> iBal;
    cout << iBal << endl;
    
    cout << "ENTER THE RATE OF INTEREST=";
    cin >> roi;
    cout << roi << endl;
    
    cout << "ENTER THE DURATION OF ACCOUNT HOLDING=";
    cin >> hTime;
    cout << hTime << endl;
    
    Account acc1(iBal, roi, hTime);
    
    cout << "ENTER D FOR DEPOSIT\nENTER W FOR WITHDRAW\nENTER I FOR INTEREST RATE\nENTER B FOR BALANCE\nENTER E FOR EXIT\n\n";
    char c = '1';   // except 'E'
    
    while(c != 'E') {
        c = acc1.choose();
        int amt;
        int interest;
        
        switch(c) {
            case 'D':
                cout << "PLEASE ENTER THE AMOUNT TO BE DEPOSIT=";
                cin >> amt;
                cout << amt << endl;
                acc1.deposit(amt);
                cout << "BALANCE AFTER DEPOSIT=" << acc1.getBalance() << "\n\n";
                break;
            case 'W':
                cout << "PLEASE ENTER THE AMOUNT TO BE WITHDRAW=";
                cin >> amt;
                cout << amt << endl;
                if(amt > acc1.getBalance()) {
                    cout << "INSUFFICIENT BALANCE IN YOUR ACCOUNT" << endl;
                }
                else {
                    acc1.withdraw(amt);
                    cout << "AMOUNT DRAWN=" << amt << endl;
                    cout << "CURRENT BALANCE=" << acc1.getBalance() << endl;
                }
                cout << endl;
                break;
            case 'I':
                interest = acc1.calculateInterest();
                cout << "THE AMOUNT OF INTEREST=" << interest << endl;
                cout << "BALANCE AFTER THE HOLDING DURATION=" << acc1.getBalance()+interest << "\n\n";
                break;
            case 'B':
                cout << acc1.getBalance();
                cout << endl;
                break;
            case 'E':
                cout << "ALL INFORMATION OF DATABASE HAS BEEN DELETED" << endl;
                break;
            default: 
                cout << "CHOOSE A VALID OPTION";
                break;
        }
    }

    return 0;
}