#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    } 
}

int main()
{
    int Brr[7] = {11,21,51,101,111,121,151};

    Display(Brr,7);   //  Display(100,7)
    
    return EXIT_SUCCESS;
}