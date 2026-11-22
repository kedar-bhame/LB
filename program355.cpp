#include<iostream>
using namespace std;

class Number
{
    private :
        int *Arr;
        int iLength;

    public :
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

        int Summation()
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }

        float Average()
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return ((float)iSum / (float)iLength);
        }
};

int main()
{
    int iSize = 0, iRet = 0;
    float fRet = 0.0f;

    cout<<"Enter number of elements : \n";
    cin>>iSize;

    // Step1 : Allocate memory
    Number *number1 = new Number(iSize);
    
    // Step2 : use the memory

    // Issue due to public
    // number1->Arr = NULL;

    number1->Accept();
    number1->Display();

    iRet = number1->Summation();
    cout<<"Summation is : "<<iRet<<endl;

    fRet = number1->Average();
    cout<<"Average is : "<<fRet<<endl;


    // Step3 : Free the memory
    delete number1;
    
    return 0;
}