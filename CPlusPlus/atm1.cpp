#include <iostream>
using namespace std;

class ATM {
private:
    double balance;

public:
    ATM() : balance(0.0) {}

    void checkBalance() {
        cout << "Your current balance is: (tk)" << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "You have successfully deposited (tk)" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "You have successfully withdrawn (tk)" << amount << endl;
        }
    }

    void displayMenu() {
        cout << "\n===== ATM Menu =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "====================\n";
    }
};

int main() {
    ATM atm;
    int choice;
    double amount;

    while (true) {
        atm.displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter the amount to deposit: (tk)";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter the amount to withdraw: (tk)";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

