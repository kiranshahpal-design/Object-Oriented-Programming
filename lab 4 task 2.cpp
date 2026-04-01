#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(string accNo, string accHolder, double bal) {
        accountNumber = accNo;
        accountHolder = accHolder;
        balance = bal;
    }

    void showAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b("PK0309800780100", "Kiran Shahpal", 10000);
    b.showAccountDetails();
    return 0;
}