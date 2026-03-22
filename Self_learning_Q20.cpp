#include<iostream>
#include<memory>
using namespace std;

int main() 
{

    // unique_ptr
    unique_ptr<int> p1(new int(10));
    cout << "unique_ptr: " << *p1 << endl;

    // shared_ptr
    shared_ptr<int> p2 = make_shared<int>(20);
    shared_ptr<int> p3 = p2;
    cout << "shared_ptr count: " << p2.use_count() << endl;

    // weak_ptr
    weak_ptr<int> p4 = p2;
    cout << "weak_ptr created\n";

    return 0;
}