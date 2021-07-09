#include<iostream>

using namespace std;

class parent
{
    public:
    parent()
    {
        cout<<"\nThis is the parent class or the base class.";
    }
};

class child:public parent
{
    public:
    child()
    {
        cout<<"\nThis is the child class or derived class.";
    }
};

int main()
{
    child c1;
    return 0;
}