#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name : \n");
    scanf("%[^'\n']s",sName);   // Enter mean (\n) remains in input buffer but code on my computer work great

    printf("Enter your age : \n");
    scanf(" %d",&iAge);     // space added

    printf("Enter your marks : \n");
    scanf("%f",&fMarks);
    
    printf("Welcome %s \n",sName);
    printf("Your age is : %d \n",iAge);
    printf("Your marks is : %f \n",fMarks);

    return EXIT_SUCCESS;
}