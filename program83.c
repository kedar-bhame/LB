#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("It is Divisible");
    }
    else
    {
        printf("It is not divisible");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}