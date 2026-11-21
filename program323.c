#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iSize = 0;

    printf("Enter number of elements you want : \n");
    scanf("%d",&iSize);

    // Step 1 : Allocate the memory
    ptr = (int *) malloc(sizeof(int) * iSize);
    
    // Step 2 : Use the memory

    // Step 3 : Free the memory
    free(ptr);
    
    return EXIT_SUCCESS;
}