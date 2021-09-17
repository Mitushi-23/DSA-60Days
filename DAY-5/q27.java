// Java Program to determine whether a given matrix is an identity matrix
import java.util.Scanner;
public class q27 {
   
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
                if(i==j && a[i][j]==1)
                {
                    ++c;
                }
                else
                if(i!=j && a[i][j]==0)
                {
                    ++c;
                }
            }
        }
        if(c==9)
        System.out.println("Yes, A is an identity matrix");
        else
        System.out.println("No, A is not an identity matrix");
        sc.close();
    }
} 

