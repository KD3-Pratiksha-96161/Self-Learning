#include<iostream>
using namespace std;

template<class T>
class Array 
{
    T *arr;
    int size;

public:
    Array(int size) 
    {
        this->size = size;
        arr = new T[size];
    }

    ~Array() {
        delete[] arr;
    }

    void accept() 
    {
        for(int i=0; i<size; i++)
            cin >> arr[i];
    }

    void display() 
    {
        for(int i=0; i<size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    T& operator[](int index) 
    {
        return arr[index];
    }
};

int main() 
{
    Array<int> a(3);
    a.accept();
    a.display();

    return 0;
}