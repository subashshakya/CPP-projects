#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter any number you want to:";
    cin>>num;
    if(num<1)
    {
        cout<<"the entered number is negative";
    }
    else if(num>1)
    {
        cout<<"the entered number is positive";
    }
    else{
        cout<<"the entered number is zero";
    }
}