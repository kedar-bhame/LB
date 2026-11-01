#include<stdio.h>
#include<stdlib.h>

int main()
{
   char Arr[7] = {'G','A','N','E','S','H','\0'};

   printf("%s\n",Arr);

   printf("Size of array is : %d",sizeof(Arr));
    
    return EXIT_SUCCESS;
}