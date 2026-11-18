// Experiment No. 9
#include <iostream>
#include <exception>
using namespace std;

class BankingException : public exception {};

class InsufficientBalance : public BankingException {};

class InvalidAmount : public BankingException {};

int main() {
    double balance = 5000, amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;

    try {
        if (amount <= 0)
            throw InvalidAmount();
        if (amount > balance)
            throw InsufficientBalance();

        balance -= amount;
        cout << "Transaction Successful!" << endl;
        cout << "Balance: " << balance << endl;
    } catch (InvalidAmount &) {
        cout << "Error: Invalid Amount!" << endl;
    } catch (InsufficientBalance &) {
        cout << "Error: Insufficient Balance!" << endl;
    }

    return 0;
}
