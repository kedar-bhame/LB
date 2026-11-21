#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;

    printf("Enter number of elements you want : \n");
    scanf("%d",&iSize);

    // Step 1 : Allocate the memory
    ptr = (int *) malloc(sizeof(int) * iSize);
    
    // Step 2 : Use the memory
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    // Step 3 : Free the memory
    free(ptr);
    
    return EXIT_SUCCESS;
}