
//Java Program to find the frequency of odd & even numbers in the given matrix
import java.util.*;

public class q32 {
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
        int odd=0, even=0;
        for (int i = 0; i < n; i++) {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]%2==0)
                ++even;
                else
                ++odd;
            }
        }
        System.out.println("Frequency of odd elements in a mtrix is "+odd);
        System.out.println("Frequency of even elements in a mtrix is "+even);
        sc.close();
    }
}
