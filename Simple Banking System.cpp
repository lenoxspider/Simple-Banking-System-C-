#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    //variables
    int choice;
    char exit_command = 'y';
    float account_balance = 0, deposit_amount, withdraw_amount;

    //loop
    while (exit_command == 'y' || exit_command == 'Y') {
        cout << "Simple Banking System\n";
        cout << "===== Banking Menu =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Choose an option:";
        cin >> choice;

        switch (choice) {
            default:
                cout << "Please check your input";
                break;
            case 1:
                cout << fixed << setprecision(2);
                cout << "Your balance is: $" << account_balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit:";
                cin >> deposit_amount;
                if (deposit_amount <= 0) {
                    cout << "Enter a valid amount.\n";
                    break;
                } else {
                    account_balance += deposit_amount;
                    cout << "Your deposit is successful\n";
                    cout << fixed << setprecision(2);
                    cout << "New Balance: $" << account_balance << endl;
                    break;
                }

            case 3:
                cout << "Enter amount to withdraw:";
                cin >> withdraw_amount;
                if (withdraw_amount > account_balance) {
                    cout << "Insufficient balance\n";
                    break;
                } else {
                    account_balance -= withdraw_amount;
                    cout << "Your withdrawal is successful\n";
                    break;
                }

            case 4:
                cout << "Goodbye!\n";
                break;
        }
        cout << "Do you want to perform another operation? (y/n):";
        cin >> exit_command;
    }
    return 0;
}

