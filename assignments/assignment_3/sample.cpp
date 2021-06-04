#include<iostream>

using namespace std;

void add(int num1,int num2)
{
    cout<<"\nThe sum of numbers is:"<<num1+num2;
};

void add(double num1,int num2)
{
    cout<<"\nThe sum of numbers is:"<<num1+num2;
};

void add(double num1,double num2)
{
    cout<<"\nThe sum of numbers is:"<<num1+num2;
};


int main()
{
    add(10,20);
    add(20.1,19);
    add(20.4,3.5);
}