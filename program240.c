#include<stdio.h>
#include<stdlib.h>

void Display(char *str)
{
    printf("%s\n",str);
}

int main()
{
    char Arr[] = "Ganesh";

    Display(Arr);   // Display(100)  // address of Arr is 100 suppose

    return EXIT_SUCCESS;
}