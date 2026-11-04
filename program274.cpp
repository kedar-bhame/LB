#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int No1;
        int No2;

        Arithematic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }

        int Addition()
        {
            int Ans;
            Ans = No1 + No2;
            return Ans;
        }
};

int main()
{
    Arithematic aobj1(10,11);
    Arithematic aobj2(20,21);


    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";
   
    return EXIT_SUCCESS;
}