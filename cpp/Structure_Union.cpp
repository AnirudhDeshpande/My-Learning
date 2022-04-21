#include <iostream>
using namespace std;

struct Student1
{
    int roll_no;
    char name[40];
    int phone_number;
};

union Student2
{
    int roll_no;
    char name[40];
    int phone_number;
};

int main()
{
    struct Student1 s1;
    union Student2 u1;

    cout << "Size of structure: " << sizeof(s1) << endl;
    cout << "Size of union: " << sizeof(u1) << endl;
    return 0;
}