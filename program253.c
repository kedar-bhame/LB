#include<stdio.h>
#include<stdlib.h>

int CountX(char *str)
{
    int iCountX = 0;

    while(*str != '\0')
    {
        if((*str == 97) || (*str == 98) || (*str == 99) || (*str == 100))
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

    iRet = CountX(Arr);

    printf("frequency : %d\n", iRet);

    return EXIT_SUCCESS;
}