#include<stdio.h>
#include<stdlib.h>

long int Factorial(int iNo)
{ 
    int iCnt;
    long int iFact = 0;
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
    long int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);    

    printf("Factorial is : %ld ",iRet);
    return EXIT_SUCCESS;
}