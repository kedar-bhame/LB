#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ULONG;

ULONG Factorial(int iNo)
{ 
    int iCnt;
    ULONG iFact = 0;
    // iFact = 1;
    for(iCnt = 1, iFact = 1;iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{

    int iValue;
    ULONG iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);    

    printf("Factorial is : %lld ",iRet);
    return EXIT_SUCCESS;
}