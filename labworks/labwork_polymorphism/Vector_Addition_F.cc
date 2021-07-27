#include<iostream>
 
using namespace std;

class Vector
{
public:
    float Fx,Fy,Fz;
    
    Vector()
    {
        Fx=0;
        Fy=0;
        Fz=0;
    }

    Vector(float fx,float fy,float fz)
    {
        Fx=fx;
        Fy=fy;
        Fz=fy;
    }
    //binary operator overloading
    Vector operator +(Vector F)
    {
        //Fx,Fy,Fz are implicitly called and the arrgumented object is explicitly called.
        Vector Sum;
        Sum.Fx=Fx+F.Fx;
        Sum.Fy=Fy+F.Fy;
        Sum.Fz=Fz+F.Fz;
        //Sum is the value of the added vectors
        return Sum;
    }
};

int main()
{
    Vector F1,F2,Fs;
    F1=Vector(1.2,3.4,5.6);
    F2=Vector(2.3,4.5,6.7);
    Fs=F1+F2;
    //here Fs is obtained from the + operator overloading.
    cout<<"The sum of the given vectors are: "<<Fs.Fx<<"a^x + "<<Fs.Fy<<"a^y + "<<Fs.Fz<<"a^z"<<endl;
}