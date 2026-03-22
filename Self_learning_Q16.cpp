#include<iostream>
#include<memory>
using namespace std;

class Student 
{
public:
    void display() 
    {
        cout << "Student Display\n";
    }
};

int main() 
{
    try 
    {
        unique_ptr<Student> s(new Student()); // auto delete
        s->display();
    }
    catch(...) 
    {
        cout << "Invalid input\n";
    }
    return 0;
}