#include<iostream>
using namespace std;

// strlen
int myStrlen(const char *str) {
    int count = 0;
    while(str[count] != '\0')
        count++;
    return count;
}

// strcpy
void myStrcpy(char *dest, const char *src) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char src[50] = "Sunbeam";
    char dest[50];

    cout << "Length: " << myStrlen(src) << endl;

    myStrcpy(dest, src);
    cout << "Copied String: " << dest << endl;

    return 0;
}