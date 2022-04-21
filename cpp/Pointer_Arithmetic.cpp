#include <iostream>
using namespace std;

int main()
{
    int *ip1, *ip2, *ip3, x = 10, y = 20;

    ip1 = &x;
    ip2 = &y;

    cout << "x through ip1= " << *ip1 << endl;
    cout << "ip1= " << ip1 << endl;
    cout << "\ny through ip2= " << *ip2 << endl;
    cout << "ip2= " << ip2 << endl;

    // ip3 = ip1 + ip2;
    // Error:invalid operands of types 'int*' and 'int*' to binary 'operator+'

    *ip3 = *ip1 + *ip2; // valid
    cout << "\nip3= " << ip3 << endl;
    cout << "ip3 dereferencing= " << *ip3 << endl;

    ip1 = ip1 + 1; // valid
    cout << "\nip1= " << ip1 << endl;
    cout << "ip1 dereferencing= " << *ip1;
    return 0;
}