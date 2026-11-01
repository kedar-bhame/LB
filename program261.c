#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else        
        {
            iCountDigit++;      // Issue
        } 
        
        str++;
    }

    printf("Number of capital letters : %d\n",iCountCapital);
    printf("Number of small letters : %d\n",iCountSmall);
    printf("Number of digits : %d\n",iCountDigit);
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);

    return EXIT_SUCCESS;
}