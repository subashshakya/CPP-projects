//to create sample class with 2 float data members and member functions void getdata() to input the values and
//one friend function float mean(sample) to calculate and return mean value

#include<iostream>

using namespace std;

class Sample
{
private:
    float var1,var2;

public:
    void getData()
    {
        cout<<"\nEnter any two numbers: ";
        cin>>var1>>var2;
    }

    friend float mean(Sample v1);
};

float mean(Sample v1)
{
    float sum,mean;
    //since float mean(Sample v1) is a friend function for Class Sample so it can access the private members
    sum=v1.var1+v1.var2;
    mean=sum/2;
    return mean;
}

int main()
{
    Sample s1;
    s1.getData();
    float meean=mean(s1);
    cout<<"\nThe mean of given data is: "<<meean;
}