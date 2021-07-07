#include<iostream>

using namespace std;

class binary
{
private:
    int a;
    int b;
public:
    binary()
    {
        a=0;
        b=0;
    }

    binary(int x,int y)
    {
        a=x;
        b=y;
    }

    binary operator +(binary bin)
    {
        binary temp;
        cout<<"\nthe value of temp in the operator is: "<<temp.a;
        cout<<"\nthe value of b inside temp is: "<<temp.b;

        cout<<"\nthe value of a in passed object is: "<<bin.a;
        cout<<"\nthe value of b in passed arguement is: "<<bin.b;

        temp.a=a+bin.a;
        temp.b=b+bin.b;

        return temp;
    }

    void display();
};

void binary::display()
{
    cout<<"\nthe value of a is:"<<a;
    cout<<"\nthe value of b is: "<<b;
};

int main()
{
    binary b1,b2,b3;
    b1=binary(10,20);
    b2=binary(30,40);

    b3=b1+b2;

    b1.display();
    b2.display();
    b3.display();
}