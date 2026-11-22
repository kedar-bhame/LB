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

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the elements : \n";

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            cout<<"Elements of the array are: \n";

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
};

int main()
{
    // Step1 : Allocate memory
    Number *number1 = new Number(5);

    // Step2 : use the memory
    number1->Accept();
    number1->Display();

    // Step3 : Free the memory
    delete number1;
    
    return EXIT_SUCCESS;
}