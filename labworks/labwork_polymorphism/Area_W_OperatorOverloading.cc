#include<iostream>
 
using namespace std;
 
class Shape
{
protected:
    float Length,Breadth;
public:
    Shape()
    {
        Length=0;
        Breadth=0;
    }

    void getData()
    {
        cout<<"Enter length: "<<endl;
        cin>>Length;
        cout<<"Enter Breadth: "<<endl;
        cin>>Breadth;
    }
};

class Triangle:public Shape
{
public:
    void getTriangle()
    {
        cout<<"Enter the data of the triangle: "<<endl;
        getData();
    }

    void operator *()
    {
        float aot=Length*Breadth*0.5;
        cout<<"The area of the triangle is: "<<aot<<endl;
    }
};

class Rectangle:public Shape
{
public:
    void getRectangle()
    {
        cout<<"Enter the data of the rectangle: "<<endl;
        getData();
    }

    void operator *()
    {
        float aor=Length*Breadth;
        cout<<"The area of the given rectangle is: "<<aor<<endl;
    }
};

class Square:public Shape
{
public:
    void getSquare()
    {
        cout<<"Enter the data of the Square: "<<endl;
        getData();
    }

    void operator *()
    {
        float aos=Length*Breadth;
        cout<<"The area of the square is: "<<aos<<endl;
    }
};

int main()
{
    Triangle t1;
    t1.getTriangle();
    *t1;
    
    Rectangle r1;
    r1.getRectangle();
    *r1;

    Square s1;
    s1.getSquare();
    *s1;
}