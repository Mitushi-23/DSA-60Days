//Multiply Two Matrices
import java.util.*;

public class q23 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int a[][] = new int[n][n];
        int b[][] = new int[n][n];
        System.out.println("Enter the elements of matrix A");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter the elements of matrix B");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                b[i][j] = sc.nextInt();
            }
        }

        int product[][] = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                product[i][j]=0;
                for (int k = 0; k < n; k++) {
                    product[i][j]+= a[i][k] * b[k][j];
                }
            }
        }
        System.out.println("New matrix is");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(product[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }

}
