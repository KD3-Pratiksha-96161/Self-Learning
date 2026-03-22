#include<iostream>
using namespace std;

class BankAccount 
{
    int accNo;
    double balance;

public:
    BankAccount(int accNo=1, double balance=0) 
    {
        this->accNo = accNo;
        this->balance = balance;
    }

    void deposit(double amount) 
    {
        if(amount < 0)
            throw amount;
        balance += amount;
    }

    void withdraw(double amount) 
    {
        if(amount < 0)
            throw amount;
        if(amount > balance)
            throw "Insufficient Balance";
        balance -= amount;
    }

    void display() 
    {
        cout << "Balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount b(101, 1000);

    try 
    {
        b.deposit(500);
        b.withdraw(2000);
    }
    catch(double amt) 
    {
        cout << "Invalid Amount: " << amt << endl;
    }
    catch(const char *msg) 
    {
        cout << msg << endl;
    }

    b.display();
    return 0;
}