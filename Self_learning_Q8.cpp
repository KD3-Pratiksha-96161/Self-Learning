#include<iostream>
using namespace std;

class Programmer {
public:
    Programmer() 
    { 
        cout << "Programmer Constructor\n"; 
    }
    void work() 
    { 
        cout << "Programming...\n"; 
    }
};

class Teacher {
public:
    Teacher() 
    { 
        cout << "Teacher Constructor\n"; 
    }
    void work() 
    { 
        cout << "Teaching...\n"; 
    }
};

class ProgrammingTeacher : public Programmer, public Teacher {
public:
    ProgrammingTeacher() 
    { 
        cout << "ProgrammingTeacher Constructor\n"; 
    }
};

int main() {
    ProgrammingTeacher pt;
    pt.Programmer::work();
    pt.Teacher::work();

    return 0;
}