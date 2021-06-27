// Code
// including required libraries
#include <iostream>    // this library enables i/o operations

// using 'std' namespace for stf:: scope
using namespace std;

// declaration of class Account
class Account {
    // private members
    private:
        int account_balance;    // current account balance
    
    // public members
    public:
        int rate_of_interest, holding_time;    // rate of interest and holding time
    
        // Account class' constructor to initialize private and public member variables
        Account(int i, int r, int ht) {
            account_balance = i;    // initializing account balance
            rate_of_interest = r;    // initializing rate of interest
            holding_time = ht;    // initializing holding time
        }
        
        // function to deposit amount
        void deposit(int amount) {
            account_balance += amount;    // adding the deposited amount to current account balance
        }   
        
        // function to withdraw amount
        void withdraw(int amount) {
            account_balance -= amount;    // subtracting the withdrawn amount from current account balance
        }
        
        // function to calculate interest
        int calculateInterest() {
            return (account_balance*rate_of_interest*holding_time)/100;    // calculating simple interest on current account balance, rate of interest and holding time
        }
        
        // function to read the private member 'account_balance'
        int getBalance() {
            return account_balance;    // returning current account balance
        }
        
        // function to choose among different action operations
        char choose() {
            char c;    // declaring char variable 'c'
            cout << "PLEASE SELECT AN OPTION=";
            cin >> c;    // reading and storing the operation selected by user
            cout << c << endl;
            
            return c;    // returning user's selected operation as char
        }
};

// main() function
int main()
{
    cout << "ALL THE ENTRIES MUST BE MADE WITH UPPERCASE LETTERS ONLY" << endl;
    
    int iBal, roi, hTime;    // declaring local variables to input initial balance, rate of interest and holding time respectively
    
    cout << "ENTER THE INITIAL BALANCE=";
    cin >> iBal;    // inputting initial balance
    cout << iBal << endl;
    
    cout << "ENTER THE RATE OF INTEREST=";
    cin >> roi;    // inputting rate of interest
    cout << roi << endl;
    
    cout << "ENTER THE DURATION OF ACCOUNT HOLDING=";
    cin >> hTime;    // inputting holding time
    cout << hTime << endl;
    
    Account acc1(iBal, roi, hTime);    // declaring an Account object along with initialization parameters
    
    cout << "ENTER D FOR DEPOSIT\nENTER W FOR WITHDRAW\nENTER I FOR INTEREST RATE\nENTER B FOR BALANCE\nENTER E FOR EXIT\n\n";
    char c = '1';   // declaring local variable c of type char, it can be initialized to any character except 'E' since 'E' is for the exit condition
    
    // looping until char c is equal to 'E'
    while(c != 'E') {
        c = acc1.choose();    // calling member function to return the chosen operation
        int amt;    // declaring local variable `amt` to store amount in order to deposit and withdraw
        int interest;    // declaring local variable `interest` to store calculated interest
        
        // using switch expression to perform different action operations
        switch(c) {
            // when user chooses to deposit
            case 'D':
                cout << "PLEASE ENTER THE AMOUNT TO BE DEPOSIT=";
                cin >> amt;    // inputting the amount to be deposited
                cout << amt << endl;
                acc1.deposit(amt);    // calling member function to deposit the amount specified
                cout << "BALANCE AFTER DEPOSIT=" << acc1.getBalance() << "\n\n";    // calling member function to read and return the private member account_balance 
                break;
            // when user chooses to withdraw
            case 'W':
                cout << "PLEASE ENTER THE AMOUNT TO BE WITHDRAW=";
                cin >> amt;    // inputting amount to be withdrawn
                cout << amt << endl;
                if(amt > acc1.getBalance()) {
                    // when the amount entered by user is more than current account balance
                    cout << "INSUFFICIENT BALANCE IN YOUR ACCOUNT" << endl;
                }
                else {
                    // when the amount entered by user is less than or equal to current account balance
                    acc1.withdraw(amt);    // calling member function to withdraw the amount specified
                    cout << "AMOUNT DRAWN=" << amt << endl;
                    cout << "CURRENT BALANCE=" << acc1.getBalance() << endl;    // calling member function to read and return the private member account_balance
                }
                cout << endl;
                break;
            // when user chooses to calculate interest
            case 'I':
                interest = acc1.calculateInterest();    // calling member function to return the calculated interest
                cout << "THE AMOUNT OF INTEREST=" << interest << endl;
                cout << "BALANCE AFTER THE HOLDING DURATION=" << acc1.getBalance()+interest << "\n\n";    // calling member function to read and return the private member account_balance and adding its returned value to the interest calculated in previous step
                break;
            // when user chooses to display current account balance
            case 'B':
                cout << acc1.getBalance();    // calling member function to read and return the private member account_balance
                cout << endl;
                break;
            // when user chooses to exit
            case 'E':
                cout << "ALL INFORMATION OF DATABASE HAS BEEN DELETED" << endl;
                break;
            // when user chooses something else that is not mentioned in the provided options
            default: 
                cout << "CHOOSE A VALID OPTION";
                break;
        }
    }

    return 0;
}