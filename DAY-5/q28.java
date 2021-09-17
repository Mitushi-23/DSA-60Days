// Java Program to determine whether a given matrix is an sparse matrix
import java.util.Scanner;
public class q28 {
   
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
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==0)
                {
                    ++c;
                }
            }
        }
        if(c > (n*n)/2)
        System.out.println("Yes, A is a sparse matrix");
        else
        System.out.println("No, A is not a sparse matrix");
        sc.close();
    }
} 

