#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
using namespace std;

// Account class to store account information
class Account {
public:
    string atmNumber; // ATM number
    string password;  // Account password
    double balance;   // Account balance

    Account() : balance(0.0) {} // Default constructor

    Account(string atmNum, string pass, double bal)
        : atmNumber(atmNum), password(pass), balance(bal) {} // Parameterized constructor
};

// ATM class to manage the ATM operations
class ATM {
private:
    unordered_map<string, Account> accounts; // Store accounts using an unordered_map
    const string filename = "accounts.txt";  // File name for storing accounts

    // Load accounts from the file
    void loadAccounts() {
        ifstream infile(filename);
        if (infile.is_open()) {
            string atmNumber, password;
            double balance;
            while (infile >> atmNumber >> password >> balance) {
                accounts[atmNumber] = Account(atmNumber, password, balance);
            }
            infile.close();
        } else {
            cout << "No existing accounts found. Starting fresh.\n";
        }
    }

    // Save accounts to the file
    void saveAccounts() {
        ofstream outfile(filename);
        if (outfile.is_open()) {
            for (const auto &pair : accounts) {
                outfile << pair.second.atmNumber << " "
                        << pair.second.password << " "
                        << pair.second.balance << endl;
            }
            outfile.close();
        } else {
            cout << "Error saving accounts to file.\n";
        }
    }

    // Display the transaction menu
    void displayTransactionMenu() {
        cout << "\n===== ATM Menu =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Logout\n";
        cout << "====================\n";
    }

    // Display the main menu
    void displayMainMenu() {
        cout << "\n===== Main Menu =====\n";
        cout << "1. Create Account\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "=====================\n";
    }

public:
    // Constructor: load accounts when ATM object is created
    ATM() {
        loadAccounts();
    }

    // Destructor: save accounts when ATM object is destroyed
    ~ATM() {
        saveAccounts();
    }

    // Create a new account
    void createAccount() {
        Account account;
        cout << "Enter a unique ATM Number: ";
        cin >> account.atmNumber;
        cout << "Enter a Password: ";
        cin >> account.password;
        account.balance = 0.0;

        if (accounts.find(account.atmNumber) != accounts.end()) {
            cout << "ATM Number already exists. Try again with a different number.\n";
        } else {
            accounts[account.atmNumber] = account;
            cout << "Account created successfully!\n";
        }
    }

    // Login to an existing account
    Account* login() {
        string atmNumber, password;
        cout << "Enter ATM Number: ";
        cin >> atmNumber;
        cout << "Enter Password: ";
        cin >> password;

        if (accounts.find(atmNumber) != accounts.end()) {
            if (accounts[atmNumber].password == password) {
                cout << "Login successful!\n";
                return &accounts[atmNumber];
            } else {
                cout << "Incorrect password.\n";
            }
        } else {
            cout << "Account not found.\n";
        }
        return nullptr;
    }

    // Transaction page for logged-in users
    void transactionPage(Account* account) {
        while (true) {
            displayTransactionMenu();
            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Your current balance is: $" << account->balance << endl;
                    break;
                case 2: {
                    double depositAmount;
                    cout << "Enter the amount to deposit: $";
                    cin >> depositAmount;
                    if (depositAmount > 0) {
                        account->balance += depositAmount;
                        cout << "You have successfully deposited $" << depositAmount << endl;
                    } else {
                        cout << "Invalid deposit amount!" << endl;
                    }
                    break;
                }
                case 3: {
                    double withdrawAmount;
                    cout << "Enter the amount to withdraw: $";
                    cin >> withdrawAmount;
                    if (withdrawAmount > account->balance) {
                        cout << "Insufficient balance!" << endl;
                    } else if (withdrawAmount <= 0) {
                        cout << "Invalid withdrawal amount!" << endl;
                    } else {
                        account->balance -= withdrawAmount;
                        cout << "You have successfully withdrawn $" << withdrawAmount << endl;
                    }
                    break;
                }
                case 4:
                    cout << "Logging out...\n";
                    return;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        }
    }

    // Main function to run the ATM system
    void run() {
        while (true) {
            displayMainMenu();
            int mainChoice;
            cout << "Enter your choice: ";
            cin >> mainChoice;

            if (mainChoice == 1) {
                createAccount();
            } else if (mainChoice == 2) {
                Account* account = login();
                if (account != nullptr) {
                    transactionPage(account);
                }
            } else if (mainChoice == 3) {
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            } else {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
};

int main() {
    ATM atm; // Create an ATM object
    atm.run(); // Run the ATM system
    return 0;
}
