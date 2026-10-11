import java.util.Scanner;

class program27
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        scanner = new Scanner(System.in);
        int iAge = 0;
        float fMarks = 0.0;     // Error 

        System.out.println("Enter your name : ");
        String sName = null;
        sName = scanner.next();

        System.out.println("Enter your age : ");
        iAge = scanner.nextInt();

        System.out.println("Enter your marks : ");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome "+sName);
        System.out.println("Your age is : "+iAge);
        System.out.println("Your marks is : "fMarks);
    }
}