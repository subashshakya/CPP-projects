#include<iostream>

using namespace std;

int main()
{
    //sum of all numbers
    int n,summation;
    cout<<"\nthe entered number will be added from 0 to that number:";
    cin>>n;
    if(n<0)
    {
        cout<<"\nenter a positive number"<<endl;
    }
    summation=(n*(n+1))/2;
    cout<<"\nthe summation of all the positive numbers till the entered number is:  "<<summation<<endl;
}