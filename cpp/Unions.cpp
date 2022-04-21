// #include <iostream>
// #include <cstring>
// using namespace std;

// union Student
// {
//     int roll_no;
//     int phone_number;
//     char name[30];
// };

// int main()
// {
//     union Student p1;
//     p1.roll_no = 1;
//     p1.phone_number = 123456789;
//     strcpy(p1.name, "John");
//     cout << "Roll No: " << p1.roll_no << endl;
//     cout << "Phone Number: " << p1.phone_number << endl;
//     cout << "Name: " << p1.name << endl;
//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;

union Student
{
    int roll_no;
    int phone_number;
    char name[30];
};

int main()
{
    union Student p1;
    p1.roll_no = 1;
    cout << "Roll No: " << p1.roll_no << endl;
    p1.phone_number = 123456789;
    cout << "Phone Number: " << p1.phone_number << endl;
    strcpy(p1.name, "John");
    cout << "Name: " << p1.name << endl;
    return 0;
}