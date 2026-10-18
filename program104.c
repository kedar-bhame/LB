#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
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
    if(iSum == iNo)
    {
        printf("It is perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckPerfect(iValue);  
    
    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)