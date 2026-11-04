#include<iostream>
using namespace std;

class Arithematic
{
    public:
        double No1;
        double No2;

        Arithematic(double A, double B);
        double Addition();
        double Substraction();
};

Arithematic :: Arithematic(double A, double B)
{
    No1 = A;
    No2 = B;
}

double Arithematic :: Addition()
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

double Arithematic :: Substraction()
{
    double Ans;
    Ans = No1 - No2;
    return Ans;
}

/*
    Retrurn_Value Class_Name :: Function_Name(parameter)
    {
        //body
    }
*/

int main()
{
    Arithematic aobj1(10.5,11.6);
    Arithematic aobj2(20.5,21.6);


    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    cout<<aobj1.Substraction()<<"\n";
    cout<<aobj2.Substraction()<<"\n";
   
    return EXIT_SUCCESS;
}