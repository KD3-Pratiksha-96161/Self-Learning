#include<iostream>
using namespace std;

namespace college
{
    class Student
    {
    private:
        int rollNo;
        string name;

    public:
        Student(int r=0, string n="") : rollNo(r), name(n) {}

        void setData(int r, string n)
        {
            rollNo = r;
            name = n;
        }

        void display()
        {
            cout << "Student -> Roll No: " << rollNo << " Name: " << name << endl;
        }
    };

    class Teacher
    {
    private:
        int id;
        string name;

    public:
        Teacher(int i=0, string n="") : id(i), name(n) {}

        void setData(int i, string n)
        {
            id = i;
            name = n;
        }

        void display()
        {
            cout << "Teacher -> ID: " << id << " Name: " << name << endl;
        }
    };
}

int main()
{
    college::Student s1(1, "Amit");
    college::Teacher t1(101, "Dr. Rao");

    s1.display();
    t1.display();

    return 0;
}