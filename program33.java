// Approach 1
import java.util.Scanner;

class program33
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        scanner = new Scanner(System.in);
        
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        iResult = iValue1 + iValue2;        // Business Logic

        System.out.println("Addition is : "+iResult);

    }
}