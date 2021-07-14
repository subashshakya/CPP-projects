#include<iostream>

using namespace std;

class Student
{
protected:
    char Name[20];
    int RollNo;
public:
    void getBasicInfo()
    {
        cout<<"\nEnter your name:"<<endl;
        cin>>this->Name;

        cout<<"\nEnter your Roll Number: "<<endl;
        cin>>this->RollNo;
    }
};

class Test:public virtual Student
{
protected:
    double Maths;
    double English;
public:
    void getMarks()
    {
        cout<<"\nWhat is your score in Maths:"<<endl;
        cin>>this->Maths;

        cout<<"\nWhat is your score in english:"<<endl;
        cin>>this->English;
    }
};

class Sports:public virtual Student
{
protected:
    double Score;
public:
    void getScore()
    {
        cout<<"\nHow many points did you score throughout the season:"<<endl;
        cin>>this->Score;
    }
};

class Result:public virtual Student,public Test,public Sports
{
public:
    double SportConv()
    {
        double ret;
        if(this->Score>1000)
        {
            ret=100;
        }
        else if(this->Score<=1000&&this->Score>=500)
        {
            ret=70;
        }
        else
        {
            ret=40;
        }
        return ret;
    }

    double Total()
    {
        double total,rere;
        rere=SportConv();
        total=(this->Maths+this->English+rere)/3;

        return total;
    }

    void PassOrFail()
    {
        double to;
        to=Total();
        if(to<40)
        {
            cout<<"\nYou Failed! Try Next Time."<<endl;
        }
        else
        {
            cout<<"\nYou passed!!";
        }
    }

    void displayTotal()
    {
        double tot=Total();
        cout<<"\nName:"<<this->Name;
        cout<<"\nRoll number:"<<this->RollNo;
        cout<<"\nTotal socre is:"<<tot;
    }
};

int main()
{
    Result r1;
    r1.getBasicInfo();
    r1.getMarks();
    r1.getScore();
    r1.displayTotal();
    r1.PassOrFail();
}