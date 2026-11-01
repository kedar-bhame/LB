#include<stdio.h>
#include<stdlib.h>

int CountCapitalX(char *str)
{
    int iCountX = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountX++;
        }
        str++;
    }

    return iCountX;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapitalX(Arr);

    printf("frequency of capital letters  : %d\n", iRet);

    return EXIT_SUCCESS;
}