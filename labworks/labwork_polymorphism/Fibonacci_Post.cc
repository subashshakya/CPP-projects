#include<iostream>
 
using namespace std;

class Fibo
{
public:
    int first=0, second = 1, third;

    void operator ++(int)
    {
        cout<<first<<endl;
        third=first+second;
        first = second;
        second= third;
    }
};
int main()
{
    Fibo f1;
    int i,index;
    cout<<"Enter till which index do you want to display the series?"<<endl;
    cin>>index;
    for(i=0;i<index;i++)
    {
        f1++;
    }
}