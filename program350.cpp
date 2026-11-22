#include<iostream>
using namespace std;

class Number
{
    public :
        int *Arr;
        int iLength;

        Number(int iSize)
        {
            cout<<"Inside Instructor \n";
            this->iLength = iSize;
            this->Arr = new int[iLength];
        }

        ~Number()
        {
            cout<<"Inside destructor \n";
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
    delete number1;
    delete number2;

    return EXIT_SUCCESS;
}