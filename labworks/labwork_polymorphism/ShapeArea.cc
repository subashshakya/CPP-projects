#include<iostream>
 
using namespace std;
class Shape
{
protected:
    double Length;
    double Breadth;
public:
    Shape()
    {
        Length=0;
        Breadth=0;
    }

    void get_Data()
    {
        cout<<"Enter the length: "<<endl;
        cin>>Length;
        cout<<"Enter the breath: "<<endl;
        cin>>Breadth;
    }

    virtual void display_area()=0;
};

class Triangle:public Shape
{
public:
    void getTriangle()
    {
        cout<<"Enter the dimenssions of the triangle: "<<endl;
        get_Data();
    }

    void display_area()
    {
        double Area_Of_Triangle;
        Area_Of_Triangle=Length*Breadth*0.5;
        cout<<"The area of the given triangle is: "<<Area_Of_Triangle<<" sq. units"<<endl;
    }
};

class Rectangle:public Shape
{
public:
    void getRectangle()
    {
        cout<<"Enter the dimenssions of the rectangle: "<<endl;
        get_Data();
    }

    void display_area()
    {
        double Area_Of_Rectangle;
        Area_Of_Rectangle=Length*Breadth;
        cout<<"The area of the rectangle is: "<<Area_Of_Rectangle<<" sq. units"<<endl;
    }
};
int main()
{
    Triangle t1;
    t1.getTriangle();
    t1.display_area();

    Rectangle r1;
    r1.getRectangle();
    r1.display_area();
}