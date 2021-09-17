//Java Program to find the sum of each row and each column of a matrix
import java.util.Scanner;

public class q34 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int a[][] = new int[n][n];
        System.out.println("Enter the elements of matrix A");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        int r = 0;
        int c = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                r += a[i][j];
                c += a[j][i];
            }
            System.out.println("Sum of row " + i + " is " + r);
            System.out.println("Sum of column " + i + " is " + c);
            r=0;
            c=0;
        }
        sc.close();
    }
}
