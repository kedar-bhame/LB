// my code
#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0;
    float iCount = 0.0f;
    float iSum = 0.0f;
    float Ans = 0.0f;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    Ans = iSum / iCount;

    return Ans;
}
int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digits : %f",fRet);

    return EXIT_SUCCESS;
}