import java.util.Scanner;

public class print {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        display(n);
        System.out.println();
        sc.close();
    }

    static void display(int n) {
        if (n == 0) {
            return;
        }
        display(n - 1);
        System.out.print(n + " ");
    }
}