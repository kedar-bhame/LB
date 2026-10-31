/*
    Input: 4
    Output: 4   3   2   1   0
*/
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{

    for(int iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    pattern(iValue);

    return EXIT_SUCCESS;
}