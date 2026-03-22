#include<iostream>
#include<fstream>
using namespace std;

class Student 
{
    int roll;
    char name[20];

public:
    void accept() 
    {
        cout << "Roll: "; cin >> roll;
        cout << "Name: "; cin >> name;
    }

    void display() 
    {
        cout << roll << " " << name << endl;
    }
};

int main() 
{
    Student s;

    // Write
    ofstream fout("student.txt", ios::binary);
    s.accept();
    fout.write((char*)&s, sizeof(s));
    fout.close();

    // Read
    Student s2;
    ifstream fin("student.txt", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    s2.display();
    return 0;
}