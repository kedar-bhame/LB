import java.util.Scanner;

class program24
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        scanner = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String sName = null;
        sName = scanner.next();

        System.out.println("Welcome "+sName);
    }
}