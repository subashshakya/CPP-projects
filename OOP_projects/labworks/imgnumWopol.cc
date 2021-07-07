#include<iostream>

using namespace std;

class ImgNum
{
private:
    float Real,Imaginary;
public:
    ImgNum()
    {
        Real=0;
        Imaginary=0;
    }

    ImgNum(float r,float i)
    {
        Real=r;
        Imaginary=i;
    }

    //Binary operator implicitly calls an object in place of "Real" and "Imaginary"
    ImgNum operator+(ImgNum Num2)//operator is a keyword
    {
        ImgNum sum;
        sum.Real=Real+Num2.Real;//here Real is 3.5
        sum.Imaginary=Imaginary+Num2.Imaginary;//here Imaginary is 6.9

        return sum;
    }
    void display();//declaration of display fuction inside the class to access the private values 
};

void ImgNum::display()
{
    cout<<"\nThe sum of the given imaginary numbers is: "<<Real<<" + "<<" i"<<Imaginary;
}

int main()
{
    ImgNum num1,num2,num3;
    num1=ImgNum(3.5,6.9);
    num2=ImgNum(6.9,3.5);
    //here + is being used as operator overloading
    num3=num1+num2;
    num3.display();
}