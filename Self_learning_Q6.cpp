#include<iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal) : accountNumber(accNo), accountHolderName(name), balance(bal)
    {
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if(amount > balance)
            cout << "Insufficient Balance\n";
        else
            balance -= amount;
    }

    void display()
    {
        cout << "Account No: " << accountNumber << endl;
        cout << "Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1(101, "Pratiksha", 5000);

    b1.deposit(2000);
    b1.withdraw(1000);

    b1.display();
}