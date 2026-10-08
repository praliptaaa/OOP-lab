Hierarchical inheritance : A financial engine derives specialized product behavior (SavingsAccount and CheckingAccount) from a single base ledger class.

#include <iostream>
using namespace std;

// Base Class
class Ledger {
protected:
    double balance;
public:
    Ledger(double b) : balance(b) {}
    void displayBalance() {
        cout << "Ledger Balance: $" << balance << endl;
    }
};

// Derived Class 1 (Hierarchical Inheritance)
class SavingsAccount : public Ledger {
private:
    double interestRate;
public:
    SavingsAccount(double b, double rate) : Ledger(b), interestRate(rate) {}
    void applyInterest() {
        cout << "--- Savings Account ---" << endl;
        balance += (balance * interestRate);
        cout << "Interest applied. New ";
        displayBalance();
        cout << endl;
    }
};

// Derived Class 2 (Hierarchical Inheritance)
class CheckingAccount : public Ledger {
private:
    double transactionFee;
public:
    CheckingAccount(double b, double fee) : Ledger(b), transactionFee(fee) {}
    void processCheck(double amount) {
        cout << "--- Checking Account ---" << endl;
        balance -= (amount + transactionFee);
        cout << "Check processed with fee. Remaining ";
        displayBalance();
        cout << endl;
    }
};

int main() {
    SavingsAccount savings(1000.0, 0.05);
    savings.applyInterest();

    CheckingAccount checking(500.0, 2.50);
    checking.processCheck(100.0);
    return 0;
}