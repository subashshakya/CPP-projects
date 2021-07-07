#include<iostream>

using namespace std;

class Memo
{
private:
    int a;
    static int b;
public:
    Memo(int x, int y)
    {
        a=x;
        b=y;
    }

    void show()
    {
        cout<<"\nthe value of a and b is:  "<<a<<"\t"<<b;
    }

    static void display()
    {
        cout<<"\nthe value of b is: "<<b;
    }
};

int Memo::b=0;

int main()
{
    Memo obj1(10,20),obj2(30,40);
    obj1.show();
    obj2.show();
    obj1.display();
    obj2.display();
}