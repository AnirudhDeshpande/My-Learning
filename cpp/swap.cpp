#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter Number 1:";
    cin>>num1;
    cout<<"Enter Number 2:";
    cin>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"The values after swapping are:\n";
    cout<<"Number 1="<<num1<<"\n";
    cout<<"Number 2="<<num2;
    return 0;
}