// Error
#include<iostream>
using namespace std;

int main()
{
    int Arr[] = {0};
    int iCnt = 0;

    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    cout<<"Elements of the array are : \n";

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }

    return EXIT_SUCCESS;
}