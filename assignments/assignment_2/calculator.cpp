#include<iostream>

using namespace std;

int main()
{
    int num1,num2;
    char symbol;
    cout<<"\nenter any number:";
    cin>>num1;
    cout<<"\nenter another number:";
    cin>>num2;
    cout<<"\nwhat operation would you like to perform:+,-,*,/";
    cin>>symbol;
    switch(symbol)
    {
        case '+':
            cout<<num1<<"+"<<num2<<"+"<<num1+num2;
            break;
        case '-':
            cout<<num1<<"-"<<num2<<"="<<num1-num2;
            break;
        case '*':
            cout<<num1<<"*"<<num2<<"="<<num1*num2;
            break;
        case '/':
            cout<<num1<<"/"<<num2<<"="<<num1/num2;
            break;
    }
}