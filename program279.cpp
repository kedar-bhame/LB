#include<iostream>
using namespace std;

template <class T>
class Arithematic
{
    public:
        T No1;
        T No2;

        Arithematic(T A, T B)
        {
            No1 = A;
            No2 = B;
        }

        T Addition()
        {
            T Ans;
            Ans = No1 + No2;
            return Ans;
        }

        T Substraction()
        {
            T Ans;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    Arithematic aobj1(10.5,11.6);   // Error

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<"\n";
    
    return EXIT_SUCCESS;
}