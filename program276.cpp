#include<iostream>
using namespace std;

class Arithematic
{
    public:
        double No1;
        double No2;

        Arithematic(double A, double B)
        {
            No1 = A;
            No2 = B;
        }

        double Addition()
        {
            double Ans;
            Ans = No1 + No2;
            return Ans;
        }
};

int main()
{
    Arithematic aobj1(10.5,11.6);
    Arithematic aobj2(20.5,21.6);


    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";
   
    return EXIT_SUCCESS;
}