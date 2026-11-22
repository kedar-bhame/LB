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
    // Step1 : Allocate the memory
    Number *number1 = new Number(5);
    Number *number2 = new Number(7);

    // Step2 : use the memory

    // Step3 : Free the memory
    return EXIT_SUCCESS;
}