#include<iostream>
using namespace std;

class Product
{
protected:
    string title;
    double price;

public:
    Product(string t="", double p=0) : title(t), price(p) {}

    virtual void accept()
    {
        cin>>title>>price;
    }

    virtual void display()
    {
        cout<<title<<" "<<price<<endl;
    }

    virtual ~Product(){}
};

class Book : public Product
{
private:
    int pages;

public:
    Book() : Product(), pages(0) {}

    void accept()
    {
        Product::accept();
        cin>>pages;
    }

    void display()
    {
        cout<<"Pages: "<<pages<<endl;
    }
};

class Tape : public Product
{
private:
    int playtime;

public:
    Tape() : Product(), playtime(0) {}

    void accept()
    {
        Product::accept();
        cin>>playtime;
    }

    void display()
    {
        cout<<"Playtime: "<<playtime<<endl;
    }
};

int main()
{
    Product *arr[5];

    for(int i=0;i<5;i++)
    {
        int ch;
        cin>>ch;

        if(ch==1)
            arr[i]=new Book();
        else
            arr[i]=new Tape();

        arr[i]->accept();
    }

    for(int i=0;i<5;i++)
        arr[i]->display();
}