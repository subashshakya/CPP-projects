#include<iostream>
 
using namespace std;
 
class Vector
{
private:
    float Fx,Fy,Fz;
public:
    Vector()
    {
        Fx=0;
        Fy=0;
        Fz=0;
    }

    void getData()
    {
        cout<<"Enter the component of X: "<<endl;
        cin>>Fx;
        cout<<"Enter the component of Y: "<<endl;
        cin>>Fy;
        cout<<"Enter the Component of Z: "<<endl;
        cin>>Fz;
    }

    friend Vector operator +(Vector F,Vector V);

    void Display()
    {
        cout<<Fx<<"a^x + "<<Fy<<"a^y + "<<Fz<<"a^z";
    }
};

Vector operator +(Vector F,Vector V)
{
    Vector sum;
    sum.Fx=F.Fx+V.Fx;
    sum.Fy=F.Fy+V.Fy;
    sum.Fz=F.Fz+V.Fz;

    return sum;
}

int main()
{
    Vector v1,v2,Vs;
    v1.getData();
    v2.getData();
    Vs=v1+v2;
    Vs.Display();
}