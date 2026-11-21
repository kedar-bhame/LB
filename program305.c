#include<stdio.h>
#include<stdlib.h>

int main()
{
    float Arr[4] ={0.0f};
    int iCnt = 0;

    printf("Enter the elements of array : \n");
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%f",&Arr[iCnt]);

    }

    printf("Elements of the array are : \n");

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%f\n",Arr[iCnt]);
    }

    return EXIT_SUCCESS;
}