#include <iostream>
using namespace std;


class BankAccount {

protected:
    int accountNumber;
    string accountHolderName;

private:
    double balance;

public:

    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }


    void deposit(double amount) {
        balance = balance + amount;
        cout << "Money Deposited Successfully!\n";
    }


    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Money Withdrawn\n";
        } else {
            cout << "Not enough balance!\n";
        }
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }

    // Display account info
    virtual void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: Rs." << balance << endl;
    }

    virtual void calculateInterest() {
        cout << "No interest for normal account.\n";
    }
};

//Savings Account
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal) {
        interestRate = rate;
    }

    void calculateInterest() {
        double interest = getBalance() * (interestRate / 100);
        cout << "Savings Account Interest: ₹" << interest << endl;
    }
};

// Checking Account
class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit)
        : BankAccount(accNo, name, bal) {
        overdraftLimit = limit;
    }

    void withdraw(double amount) {
        if (amount <= (getBalance() + overdraftLimit)) {
            double newBalance = getBalance() - amount;
            cout << "Withdraw successful (Checking Account)\n";


            deposit(-amount);
        } else {
            cout << "Overdraft limit exceeded!\n";
        }
    }
};

//  Fixed Deposit Account
class FixedDepositAccount : public BankAccount {
private:
    int term;

public:
    FixedDepositAccount(int accNo, string name, double bal, int t)
        : BankAccount(accNo, name, bal) {
        term = t;
    }

    void calculateInterest() {
        double rate = 6.0;
        double interest = getBalance() * (rate / 100) * (term / 12.0);
        cout << "Fixed Deposit Interest: ₹" << interest << endl;
    }
};

// Main Function
int main() {
    BankAccount* account = NULL;
    int choice;

    do {
        cout << "\n====== SIMPLE BANK SYSTEM =====\n";
        cout << "1. Create Savings Account\n";
        cout << "2. Create Checking Account\n";
        cout << "3. Create Fixed Deposit Account\n";
        cout << "4. Deposit\n";
        cout << "5. Withdraw\n";
        cout << "6. Display Account Info\n";
        cout << "7. Calculate Interest\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int accNo;
            string name;
            double bal, rate;

            cout << "Enter Account Number: ";
            cin >> accNo;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Balance: ";
            cin >> bal;
            cout << "Enter Interest Rate: ";
            cin >> rate;

            account = new SavingsAccount(accNo, name, bal, rate);
            cout << "Savings Account Created!\n";
        }

        else if (choice == 2) {
            int accNo;
            string name;
            double bal, limit;

            cout << "Enter Account Number: ";
            cin >> accNo;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Balance: ";
            cin >> bal;
            cout << "Enter Overdraft Limit: ";
            cin >> limit;

            account = new CheckingAccount(accNo, name, bal, limit);
            cout << "Checking Account Created!\n";
        }

        else if (choice == 3) {
            int accNo, term;
            string name;
            double bal;

            cout << "Enter Account Number: ";
            cin >> accNo;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Balance: ";
            cin >> bal;
            cout << "Enter Term (months): ";
            cin >> term;

            account = new FixedDepositAccount(accNo, name, bal, term);
            cout << "Fixed Deposit Account Created!\n";
        }

        else if (choice == 4) {
            if (account != NULL)
                {
                double amt;
                cout << "Enter amount to deposit: ";
                cin >> amt;
                account->deposit(amt);
            } else {
                cout << " Create account first!\n";
            }
        }

        else if (choice == 5)
            {
            if (account != NULL) {
                double amt;
                cout << "Enter amount to withdraw: ";
                cin >> amt;
                account->withdraw(amt);
            } else {
                cout << " Create account first!\n";
            }
        }

        else if (choice == 6) {
            if (account != NULL) {
                account->displayAccountInfo();
            } else {
                cout << " No account exists!\n";
            }
        }

        else if (choice == 7)
        {
            if (account != NULL)
                {
                account->calculateInterest();
            } else {
                cout << " No account exists!\n";
            }
        }

    } while (choice != 8);

    delete account;
    cout << "\n Program Ended.\n";
    return 0;
}
