#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{ 
    int iCnt, iFact = 0;
    iFact = 1;
    for(iCnt = 1, iFact = 1;iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{

    int iValue, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);    

    printf("Factorial is : %d ",iRet);
    return EXIT_SUCCESS;
}