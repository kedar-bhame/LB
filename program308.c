#include<stdio.h>
#include<stdlib.h>

void Display()
{

}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("%X\n",Arr);
    printf("%X\n",&Arr);
    printf("%X\n",&Arr[0]);

    return EXIT_SUCCESS;
}