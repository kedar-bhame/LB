#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[4] ={0};
    int iCnt = 0;

    printf("Enter the elements of array : \n");
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);

    }

    printf("Elements of the array are : \n");

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return EXIT_SUCCESS;
}