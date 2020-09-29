import java.util.Scanner;

class MyClass 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter some number");
        int a = scan.nextInt();
        System.out.println("The Entered value is");
        System.out.print(a);
        scan.close();
    }
}