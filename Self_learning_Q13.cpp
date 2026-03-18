#include<iostream>
using namespace std;

class Payment
{
public:
    virtual void makePayment(double amt)=0;
    virtual ~Payment()
    {}
};

class CreditCard : public Payment
{
public:
    void makePayment(double amt)
    {
        cout<<"Paid "<<amt<<" using Credit Card\n";
    }
};

class UPI : public Payment
{
public:
    void makePayment(double amt)
    {
        cout<<"Paid "<<amt<<" using UPI\n";
    }
};

class Cash : public Payment
{
public:
    void makePayment(double amt)
    {
        cout<<"Paid "<<amt<<" using Cash\n";
    }
};

class PaymentFactory
{
public:
    static Payment* create(char mode)
    {
        if(mode=='C') return new CreditCard();
        if(mode=='U') return new UPI();
        if(mode=='H') return new Cash();
        return NULL;
    }
};

int main()
{
    char mode;
    cin>>mode;

    Payment *p = PaymentFactory::create(mode);
    p->makePayment(1000);
}