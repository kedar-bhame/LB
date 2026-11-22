import java.util.Scanner;

class program346
{
    public static float Average(int Arr[])
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return ((float)iSum / (float)Arr.length);        
    }

    public static int Summation(int Arr[])
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;        
    }
    public static void main(String A[])
    {
        int iCnt = 0, iSize = 0, iRet = 0;
        float fRet = 0.0f;
        int ptr[] = null;

        Scanner scanner = null;

        scanner = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        iSize = scanner.nextInt();

        // Step1 : Allocate the memory
        ptr = new int[iSize];

        // Step2 : Use the memory
        System.out.println("Enter the elements : ");

        for(iCnt = 0; iCnt < ptr.length; iCnt++)
        {
            ptr[iCnt] = scanner.nextInt();
        }

        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < ptr.length; iCnt++)
        {
            System.out.println(ptr[iCnt]);
        }

        iRet = Summation(ptr);
        System.out.println("Addition is : "+iRet);

        fRet = Average(ptr);
        System.out.println("Average is : "+fRet);
        
        // Step3 : Deallocate the memory
        scanner = null;
        ptr = null;

        System.gc();
    }
}