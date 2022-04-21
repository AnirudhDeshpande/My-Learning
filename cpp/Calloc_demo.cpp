/*CPP Program to track the number of units sold of a certain biscuit brand, over the months of jan, feb, march.
Also to display the average number of units sold*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    int *ptr, sum = 0;

    // allocating using calloc

    ptr = (int *)calloc(3, sizeof(int));
    if (ptr == NULL)
    {
        cout << "Calloc failed.\n";
        exit(0);
    }

    cout << "Enter the number of biscuits sold in\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Month " << i + 1 << ": ";
        cin >> *(ptr + i);
        sum = sum + *(ptr + i);
    }
    cout << "The average number of biscuits sold in 3 months is:" << ceil(sum / 3.0);
    delete ptr;
    return 0;
}