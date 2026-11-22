#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

    cout<<"Enter number of elements : \n";
    cin>>iSize;

    // Step1 : Allocate the memory
    ptr = new int[iSize];

    // Step2 : Use the memory
    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>ptr[iCnt];
    }
    cout<<"Elements of the array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<endl;
    }
    // Step3 : Free them memory
    delete []ptr;

    return EXIT_SUCCESS;
}