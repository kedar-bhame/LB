#include<stdio.h>
#include<stdlib.h>

int CountVowelsX(char *str)
{
    int iCountX = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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

    iRet = CountVowelsX(Arr);

    printf("frequency of Vowels is : %d\n", iRet);

    return EXIT_SUCCESS;
}