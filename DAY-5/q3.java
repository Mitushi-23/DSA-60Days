//Java Program to left rotate the elements of an array
import java.util.Scanner;

public class q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int brr[] = new int [n];
        for(int i=0;i<n-1;i++)
        {
            brr[i] = arr[i+1];
        }
        brr[n-1] = arr[0];
        for(int i=0;i<n;i++)
        {
            System.out.print(brr[i] + " ");
        }
        System.out.println();
        sc.close();
    }
}
