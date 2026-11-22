#include<iostream>
using namespace std;

class Number
{
    public :
        int *Arr;
        int iLength;

        Number(int iSize)
        {
            this->iLength = iSize;
            this->Arr = new int[iLength];
        }

        ~Number()
        {
            delete [] this->Arr;
        }
};

int main()
{
    Number number1(5);
    Number number2(7);
    return EXIT_SUCCESS;
}