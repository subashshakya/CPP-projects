#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"\nenter any number:";
    cin>>num;
    if(num==0)
    {
        cout<<"\nthe entered number is zero.";
    }
    else if(num>0)
    {
        if(num%2==0)
        {
            cout<<"the entered number is even";
        }
        else{
            cout<<"the entered number is odd";
        }
    }
    else{
        cout<<"the entered number is negative";
    }
}