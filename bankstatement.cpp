#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;
    int lastDeposit;
    int lastWithdrawal;
public:

    void deposit(int amount) {
        balance += amount;
        lastDeposit = amount;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            lastWithdrawal = amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }

    void showLastTransaction() {
        cout << "Last Deposit: " <<lastDeposit << endl;
        cout << "Last Withdrawal: " << lastWithdrawal << endl;
    }
};

int main() {
    BankAccount account;
    int choice;
    int amount;

    do {
        cout << "\nBank Mini Statement Menu\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. View Last Transactions\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                account.deposit(amount);
                cout << "Deposited: " << amount << endl;
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.showBalance();
                break;

            case 4:
                account.showLastTransaction();
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
