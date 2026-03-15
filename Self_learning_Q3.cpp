#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    float marks;

public:
    void accept()
    {
        cout << "Roll No: ";
        cin >> rollNo;

        cout << "Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << "  Marks: " << marks << endl;
    }

    float getMarks()
    {
        return marks;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: "<<endl;
    cin >> n;

    
    Student *s = new Student[n];

    cout << "Enter Student Details"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;
        s[i].accept();
    }

    cout << "All Student Records"<<endl;
    for(int i = 0; i < n; i++)
    {
        s[i].display();
    }

    
    float maxMarks = s[0].getMarks();

    for(int i = 1; i < n; i++)
    {
        if(s[i].getMarks() > maxMarks)
        {
            maxMarks = s[i].getMarks();
        }
    }

    cout << "Highest Marks = " << maxMarks << endl;

    delete[] s;

    return 0;
}