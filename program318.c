#include<stdio.h>
#include<stdlib.h>

void Display(int ptr[])
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < 7; iCnt++)
    {
        printf("%d\n",*(ptr+iCnt));
    } 
}

int main()
{
    int Arr[7] = {11,21,51,101,111,121,151};

    Display(Arr);   //  Display(100)
    
    return EXIT_SUCCESS;
}