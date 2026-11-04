#include<iostream>
using namespace std;

template <class T>
class Arithematic
{
    public:
        T No1;
        T No2;

        Arithematic(T A, T B);
        T Addition();
        T Substraction();
};

template <class T>
Arithematic :: Arithematic(T A, T B)    // Error
{
    No1 = A;
    No2 = B;
}

template <class T>
T Arithematic :: Addition()     // Error
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

template <class T>
T Arithematic :: Substraction()     // Error
{
    T Ans;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    Arithematic <int> *aobj = new Arithematic <int> (11,10);

    cout<<aobj->Addition()<<endl;
    
    return EXIT_SUCCESS;
}