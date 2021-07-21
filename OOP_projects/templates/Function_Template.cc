//variable swap using template

#include<iostream>
 
using namespace std;

template<class T>

T Swap(T n1,T n2)
{
    T n3;
    n3=n1;
    n1=n2;
    n2=n3;
    cout<<"The swapped values are: 1st number= "<<n1<<"\t2nd number is= "<<n2<<endl;
}

int main()
{
    int num1,num2;
    float num3,num4;
    //we call Swap with both int type values
    Swap(4,5);
    //we call Swap with both float type values
    Swap(6.9,9.6);
}