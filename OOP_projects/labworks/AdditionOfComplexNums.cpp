//to add two complex numbers passing object as an argument and returning resultant complex number

#include<iostream>

using namespace std;

class Complex{
    
public:
    double Real,Imaginary;
};


Complex additionOfComplex(Complex N1,Complex N2)
{
    Complex N3;
    N3.Real=N1.Real+N2.Real;
    N3.Imaginary=N1.Imaginary+N2.Imaginary;
    return N3;
};

int main()
{
    Complex C1,C2,sumOfComplex;

    //taking input of 1st complex number
    cout<<"\nEnter the Real and Imaginary part of the Complex number: ";
    cin>>C1.Real;
    cin>>C1.Imaginary;
    cout<<"\nThis is your Complex Number: "<<C1.Real<<" +i"<<C1.Imaginary;   

    //taking input of 2nd complex number 
    cout<<"\nEnter the Real and Imaginary part of the Complex number: ";
    cin>>C2.Real;
    cin>>C2.Imaginary;
    cout<<"\nThis is your Complex Number: "<<C2.Real<<" +i"<<C2.Imaginary;   
   
    sumOfComplex=additionOfComplex(C1,C2);
    cout<<"\nThe addition of entered Complex Numbers is: "<<sumOfComplex.Real<<" +i"<<sumOfComplex.Imaginary;
    return 0;
}
