// Java Program to determine whether two matrices are equal
import java.util.Scanner;
public class q29 {
   
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
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==b[i][j])
                {
                    ++c;
                }
            }
        }
        if(c==9)
        System.out.println("Yes, Matrix A and B are equal");
        else
        System.out.println("No, Matrix A and B are not equal");
        sc.close();
    }
} 

