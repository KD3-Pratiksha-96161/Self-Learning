#include<iostream>
using namespace std;

class Person 
{
protected:
    string name;
    int age;

public:
    virtual void accept()
     {
        cout << "Name: "; 
        cin >> name;
        cout << "Age: "; 
        cin >> age;
    }

    virtual void display() {
        cout << name << " " << age << endl;
    }

    virtual void work() = 0; // pure virtual
};

class Student : public Person 
{
    int marks;
public:
    void accept() 
    {
        Person::accept();
        cout << "Marks: "; 
        cin >> marks;
    }

    void display() 
    {
        Person::display();
        cout << "Marks: " << marks << endl;
    }

    void work() 
    {
        cout << "Student studies\n";
    }
};

class Teacher : public Person 
{
    double salary;
public:
    void accept() 
    {
        Person::accept();
        cout << "Salary: "; cin >> salary;
    }

    void display() 
    {
        Person::display();
        cout << "Salary: " << salary << endl;
    }

    void work() 
    {
        cout << "Teacher teaches\n";
    }
};

int main() 
{
    Person *p;

    Student s;
    Teacher t;

    p = &s;
    p->accept();
    p->display();
    p->work();

    p = &t;
    p->accept();
    p->display();
    p->work();

    return 0;
}