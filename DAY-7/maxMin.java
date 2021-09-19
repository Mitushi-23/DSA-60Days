import java.util.Scanner;

public class maxMin {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        System.out.println("Maximum number is "+max(a, b, c));
        System.out.println("Minimum number is "+min(a, b, c));
        sc.close();
    }
    static int max(int a, int b, int c)
    {
        int var = Math.max(a,b);
        return Math.max(var,c);
    }
    static int min(int a, int b, int c)
    {
        int var = Math.min(a,b);
        return Math.min(var,c);
    }
}
