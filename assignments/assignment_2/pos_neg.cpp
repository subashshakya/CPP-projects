#include<iostream>

using namespace std;

int main()
{
    //positive or negative
    int num;
    cout<<"enter any number you want to:";
    cin>>num;
    if(num<1)
    {
        cout<<"the entered number is negative"<<endl;
    }
    else if(num>1)
    {
        cout<<"the entered number is positive";
    }
    else{
        cout<<"the entered number is zero";
    }
}