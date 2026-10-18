#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{ 
    int iCnt, iSum = 0;

    printf("Factors of %d are : \n",iNo);

    for(iCnt = 1;iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);  
    
    printf("Summation of factors is : %d ",iRet);

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)