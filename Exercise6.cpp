#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    double balance;

    BankAccount(string accNo, string holder, double bal) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << "\nAmount Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Amount Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }
};

int main() {
    BankAccount account("123456789", "Diya", 10000);

    cout << "Initial Account Details:" << endl;
    account.display();

    account.deposit(5000);
    account.withdraw(3000);

    cout << "\nFinal Account Details:" << endl;
    account.display();

    return 0;
}