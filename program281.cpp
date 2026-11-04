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
    Arithematic <int> aobj1(10,11);
    Arithematic <float> aobj2(10.5f,11.6f);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";
    
    return EXIT_SUCCESS;
}