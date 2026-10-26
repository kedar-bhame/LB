#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0, iTemp = 0;

    iTemp = iNo;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)    // ISSUE SOLVED
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    
    if(bRet == true)
    {
        printf("Number is pallindrome\n");
    }
    else
    {
        printf("Number is not pallindrome\n");
    }

    return EXIT_SUCCESS;
}