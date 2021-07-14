#include<iostream>

using namespace std;

class Staff
{
protected:
    char Name[20];
    int Code;
public:
    void getName()
    {
        cout<<"Enter your name: ";
        cin>>this->Name;
    }

    void getCode()
    {
        cout<<"\nEnter your entry code: ";
        cin>>this->Code;
    }
};

class Teacher: public Staff
{
public:
    char subject[20];
    
    void getSub()
    {
        getName();
        getCode();
        cout<<"What subject do you teach?";
        cin>>this->subject;
    }

    void showSub()
    {
        cout<<"\nName : "<<this->Name;
        cout<<"\nCode : "<<this->Code;
        cout<<"\nSubject : "<<this->subject;
    }
};

class Officer: public Staff
{
private:
    char Grade[10];
public:
    void getGrade()
    {
        cout<<"What is your grade as an officer?";
        cin>>this->Grade;
    }  

    void displayGrade()
    {
        cout<<"\nName : "<<this->Name;
        cout<<"\nCode : "<<this->Code;
        cout<<"\nThe grade of this officer is: "<<this->Grade;
    }
};

class Typist:public Staff
{
protected:
    int Speed;
public:
    void getSpeed()
    {
        cout<<"\nWhat is your typing speed?(In WPM)";
        cin>>this->Speed;
    }
};

class Regular:public Typist
{
private:
    char Publication[30];
public:
    void getPub()
    {
        cout<<"\nWhich publication do you type at?";
        cin>>this->Publication;
    }

    void displayPub()
    {
        cout<<"\nName : "<<this->Name;
        cout<<"\nCode : "<<this->Code;
        cout<<"\nSpeed of typist is: "<<this->Speed<<" WPM";
        cout<<"The publication this typist types at is: "<<this->Publication;
    }
};

class Casual:public Typist
{
private:
    float dailyWages;
public:
    void getWages()
    {
        cout<<"\nWhat is your daily wage?";
        cin>>this->dailyWages;
    }

    void showWages()
    {
        cout<<"\nName : "<<this->Name;
        cout<<"\nCode : "<<this->Code;
        cout<<"\nSpeed of typist is: "<<this->Speed<<" WPM";
        cout<<"\nThe daily wages of this typist is: "<<this->dailyWages;
    }
};

int main()
{
    Teacher t1;
    Officer o1;
    Casual c1;
    Regular r1;
    int index;
    int check;
    cout<<"\n              **Welcome to Data Collection!**              ";
    cout<<"\nPlease enter your category which you belong to:";
    cout<<"\nEnter 1 for Teacher.";
    cout<<"\nEnter 2 for Officer.";
    cout<<"\nEnter 3 for Casual Typist.";
    cout<<"\nEnter 4 for Regular Typist.";
    do 
    {
        cout<<"\nWhich Option do you want to choose?";
        cin>>index;
        switch (index)
        {
        case 1:
            t1.getSub();
            
            break;
        
        case 2:
            o1.getName();
            o1.getCode();
            o1.getGrade();
            break;

        case 3:
            c1.getName();
            c1.getCode();
            c1.getSpeed();
            c1.getWages();
            break;

        case 4:
            r1.getName();
            r1.getCode();
            r1.getSpeed();
            r1.getPub();
            break;
        
        default:
            cout<<"\n!!Enter a valid character!!";
            break;
        }
        cout<<"\nDo you want to continue?(y/n)";
        cin>>check;
    }
    while (check=='y'||check=='Y');
    

    cout<<"\n!!Do you want to see the entered data?";
    cout<<"\nEnter y for yes and n for no!";
    cin>>check;
    if(check=='y'||check=='Y')
    {
        cout<<"Press 1 to Display Information of Teacher "<<endl;
        cout<<"Press 2 to Display Information of Officer "<<endl;
        cout<<"Press 3 to Display Information of Part-time Typist "<<endl;
        cout<<"Press 4 to Display Information of Regular Typist "<<endl;
        cin>>index;
        switch(index)
        {
            case 1:
                t1.showSub();

                break;

            case 2:
                o1.displayGrade();

                break;

            case 3:
                c1.showWages();

                break;

            case 4:
                r1.displayPub();

                break;

            default:
                cout<<"\n!!Enter a valid character!!";
                break;
        }
    }
    
}