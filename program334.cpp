#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    cout<<"Enter number of elements : \n";
    cin>>iSize;

    // Step1 : Allocate the memory
    ptr = new int[iSize];

    // Step2 : Use the memory

    // Step3 : Free them memory
    delete []ptr;
    return EXIT_SUCCESS;
}