#include<stdio.h>
#include<stdlib.h>

void Display(int *ptr)
{
    printf("%d\n",*ptr);

    ptr++;
    printf("%d\n",*ptr);
    
    ptr++;
    printf("%d\n",*ptr);
    
    ptr++;
    printf("%d\n",*ptr);

    ptr++;
    printf("%d\n",*ptr);
    
}

int main()
{
    int Arr[5] = {11,21,51,101,111};

    Display(Arr);   //  Display(100)
    
    return EXIT_SUCCESS;
}