#include <iostream>
#include <string>

using namespace std;

class Account {
public:
    string customer_name;
    int account_number;
    string account_type;

    virtual void get_data() = 0;
    virtual void display_data() = 0;
};

class Saving_account : public Account {
public:
    double balance;
    double interest_rate;

    void get_data() override {
        cout << "Enter customer name: ";
        cin >> customer_name;
        cout << "Enter account number: ";
        cin >> account_number;
        cout << "Enter account type (Saving): ";
        cin >> account_type;
        cout << "Enter balance: ";
        cin >> balance;
        cout << "Enter interest rate: ";
        cin >> interest_rate;
    }

    void display_data() override {
        cout << "Customer name: " << customer_name << endl;
        cout << "Account number: " << account_number << endl;
        cout << "Account type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest rate: " << interest_rate << "%" << endl;

        double interest = balance * (interest_rate / 100) * 2;
        cout << "Interest amount for 2 years: " << interest << endl;
    }
};

class Current_account : public Account {
public:
    double balance;
    double interest_rate;

    void get_data() override {
        cout << "Enter customer name: ";
        cin >> customer_name;
        cout << "Enter account number: ";
        cin >> account_number;
        cout << "Enter account type (Current): ";
        cin >> account_type;
        cout << "Enter balance: ";
        cin >> balance;
        cout << "Enter interest rate: ";
        cin >> interest_rate;
    }

    void display_data() override {
        cout << "Customer name: " << customer_name << endl;
        cout << "Account number: " << account_number << endl;
        cout << "Account type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest rate: " << interest_rate << "%" << endl;

        double interest = balance * (interest_rate / 100) * 2;
        cout << "Interest amount for 2 years: " << interest << endl;
    }
};

int main() {
    Account *account1 = new Saving_account();
    account1->get_data();
    account1->display_data();

    Account *account2 = new Current_account();
    account2->get_data();
    account2->display_data();

    return 0;
}
