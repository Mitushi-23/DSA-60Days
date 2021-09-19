import java.util.Scanner;

public class sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a, b;
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println("Sum of two numbes is "+ add(a,b));
        System.out.println("Sum of two numbes is "+ add(4,7));
       summation();
       sc.close();
    }

    static void summation()
    {
        Scanner sc = new Scanner (System.in);
        int num1 ,  num2;
        num1=sc.nextInt();
        num2=sc.nextInt();
        int sum = num1+num2;
        System.out.println("Sum is " + sum);
        sc.close();
    }

    static int add(int n1, int n2){
        return n1+n2;
    }
}
