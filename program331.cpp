#include<iostream>
using namespace std;

int main()
{
    int Arr[] = {10,20,30,40,50};

    cout<<"Elements of the array are : \n";
    int iCnt = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }

    return EXIT_SUCCESS;
}