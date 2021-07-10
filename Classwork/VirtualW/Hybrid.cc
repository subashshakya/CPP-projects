#include<iostream>

using namespace std;

class FirstClass
{
    public:
    FirstClass()
    {
        cout<<"\nThis is the first Base class.";
    }

    void TestFunc()
    {
        cout<<"\nthis is for testing of hybrid inheritance.";
    }
};

class Branch1:virtual public FirstClass
{
    public:
    Branch1()
    {
        cout<<"\nFirst branch class is called.";
    }
};

class Branch2:virtual public FirstClass
{
    public:
    Branch2()
    {
        cout<<"\nSecond branch class is called.";
    }
};

class Leaf:public Branch1,public Branch2
{
    public:
    Leaf()
    {
        cout<<"\nLeaf class is called.";
    }
};

int main()
{
    Leaf l1;
    l1.TestFunc();
}