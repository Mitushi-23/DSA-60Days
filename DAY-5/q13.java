//Java Program to right rotate the elements of an array
import java.util.Scanner;

public class q13 {
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
            brr[i+1] = arr[i];
        }
        brr[0] = arr[n-1];
        for(int i=0;i<n;i++)
        {
            System.out.print(brr[i] + " ");
        }
        System.out.println();
        sc.close();
    }
}
