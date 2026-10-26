// 8967  ->  6  8
// 4268 ->  8   6   2   4
// 5799 ->  --------------
#include<stdio.h>
#include<stdlib.h>

void DisplayEvenDigits(int iNo)
{
    int iDigit = 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            printf("%d\n",iDigit);
        }
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenDigits(iValue);

    return EXIT_SUCCESS;
}