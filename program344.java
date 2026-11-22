import java.util.Scanner;

class program344
{
    public static void main(String A[])
    {
        int iCnt = 0, iSize = 0;
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

        // Step3 : Deallocate the memory
        scanner = null;
        ptr = null;

        System.gc();
    }
}