#include<iostream>
using namespace std;

class Arithematic
{
    public:
        float No1;
        float No2;

        Arithematic(float A, float B)
        {
            No1 = A;
            No2 = B;
        }

        float Addition()
        {
            float Ans;
            Ans = No1 + No2;
            return Ans;
        }
};

int main()
{
    Arithematic aobj1(10.5f,11.6f);
    Arithematic aobj2(20.5f,21.6f);


    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";
   
    return EXIT_SUCCESS;
}