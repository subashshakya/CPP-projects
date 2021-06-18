# CONSTRUCTOR OVERlOADING:
Constructor Overloading is a concept in object oriented programming where we have more than one constructor in a class with same name,as long as each has a different lists of arguements. 
>This is very similar to "Function Overloading".

## SOME BASIC PROPERTIES/PREQUISITS FOR CONSTRUCTOR OVERLOADING:
* Overloaded constructors essenially have the same name but different number of arguement lists.
* A constructor is called depending upon the number and type of arguements passed.
* While creating the object, arguements must be passed to let compiler know, which constructor needs to be called.

***


### BASIC EXAMPLE OF CONSTRUCTOR OVERLOADING:
```c++
    #include<iostream>

    using namespace std;

    class basicConstructor{
    private:
        int X,Y;
    
    public:
        basicConstructor()
        {
            X=66;
            Y=99;
        }

        basicConstructor(int x, int y)
        {
            X=x;
            Y=y;
        }

        int getX()
        {
            return X;
        }

        int getY()
        {
            return Y;
        }
    };

    int main()
    {
        basicConstructor C1;
        basicConstructor C2(12,34)
        cout<<"\nvalue of first variable is:"<<C1.X<<"\tvalue of second variable is:"<<C1.Y;
        cout<<"\nvalue of first variable in parameter based constructor:"<<C2.getX()<<"\nvalue of second variable in parameter based constructor:"<<C2.getY();
    }
```

***

#### [SOURCES](https://www.geeksforgeeks.org/)

***



