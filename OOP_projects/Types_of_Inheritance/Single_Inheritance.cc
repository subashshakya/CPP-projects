#include<iostream>

using namespace std;

//A parent class is made
class parent
{
    public:
    parent()
    {
        cout<<"\nThis is the parent class or the base class.";
    }
};

//the CHILD class only inherits one class so this is an example of Single Inheritance
class child:public parent
{
    public:
    child()
    {
        cout<<"\nThis is the child class or derived class."<<endl;
    }
};

int main()
{
    child c1;
    return 0;
}

//the output will be: Firstly the parent or base class is called and then the child or derived class is called.
