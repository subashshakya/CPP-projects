#include<iostream>

using namespace std;

class Parent
{
    public:
    Parent()
    {
        cout<<"This is the constructor of the base class."<<endl;
    }

    virtual void Display()
    {
        cout<<"This is base class's method."<<endl;
    }

    virtual ~Parent()
    {
        cout<<"this is the destructor of base class."<<endl;
    }
};

class Child:public Parent
{
    public:
    Child()
    {
        cout<<"This is the constructor of the derived class."<<endl;
    }

    virtual void Display()
    {
        cout<<"This is the Method call of the derived class."<<endl;
    }

    virtual ~Child()
    {
        cout<<"this is for memory management."<<endl;
    }
};

int main()
{
    Parent *p1;
    p1=new Child;
    p1->Display();
    delete p1;
}