
//Java Program to display the upper triangular matrix
import java.util.*;

public class q31 {
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
        System.out.println("Upper triangular matrix is");
        for (int i = 0; i < n; i++) {
            for(int j=0;j<n;j++)
            {
                if(i<=j)
                {
                    System.out.print(a[i][j]+" ");
                }
                else
                System.out.print(0+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
