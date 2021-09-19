import java.util.Scanner;

/** In java there is only pass by value not pass by referance */

public class swap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;
        System.out.println("Enter the value of a and b");
        a = sc.nextInt();
        b = sc.nextInt();
        Swap(a,b);
        System.out.println("a= "+a + " b= " + b);
        sc.close();
    }

    static void Swap(int num1 , int num2) // here the value is passed by value so in change in the original a and b.
    {
        int temp;
        temp = num1;
        num1=num2;
        num2=temp;
        // this change will only be valid in this function scope only.
    }
}
