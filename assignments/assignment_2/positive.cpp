#include<iostream>

using namespace std;

int main()
{
    //to print the positive number
    int num;
    cout<<"Enter any number either positive or negative";
    cin>>num;
    if(num<0)
    {
        num=num*-1;
    }
    else{
        num=num;
    }
    cout<<"the positive of the given number is:"<<num<<endl;
}