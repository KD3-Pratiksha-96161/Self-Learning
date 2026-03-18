#include<iostream>
using namespace std;

class InvalidMarks
{
public:
    void show()
    {
        cout<<"Marks cannot be negative!\n";
    }
};

class Student
{
private:
    int marks;

public:
    Student(int m=0) : marks(m) {}

    void setMarks(int m)
    {
        if(m<0)
            throw InvalidMarks();
        marks=m;
    }

    void display()
    {
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    Student s;

    try
    {
        s.setMarks(-10);
    }
    catch(InvalidMarks e)
    {
        e.show();
    }
}