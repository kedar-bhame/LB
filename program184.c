/*
    Input: 6
    Output: 1   2   3   4   5   6
*/
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
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