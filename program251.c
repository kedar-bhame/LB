#include<stdio.h>
#include<stdlib.h>

int CountSpaceX(char *str)
{
    int iCountX = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSpaceX(Arr);

    printf("frequency of white spaces is : %d\n", iRet);

    return EXIT_SUCCESS;
}