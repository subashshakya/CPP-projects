//Demonstration of how Hierachical Inheritance is processed

#include<iostream>

using namespace std;

class Parent
{
    public:
    Parent()
    {
        cout<<"\nThis is the base class.";
    }
};


//Here Child1 inherits Parent class as its base class
class Child1:public Parent
{
    public:
    Child1()
    {
        cout<<"\nThis is the 1st derived class with 'Parent' as the base class.";
    }
};

//Here Child2 also inherits Parent as its base class
class Child2:public Parent
{
    public:
    Child2()
    {
        cout<<"\nThis is the 2nd derived class with 'Parent' as the base class.";
    }
};

int main()
{
    Child1 c1;
    Child2 c2;
    return 0;
}

//When c1 object is called: Parent class is firstly called then the execution of Child1 occurs

//When c2 object is called: Parent class is firstly called then the execution of Child2 occurs

//Execution of c1 or c2 is not in particular order