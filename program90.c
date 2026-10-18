#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{ 
    int iCnt, iSum = 0;

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        iSum += iCnt;
    }
    return iSum;
}

int main()
{

    int iValue, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);    

    printf("Summation is : %d ",iRet);
    return EXIT_SUCCESS;
}