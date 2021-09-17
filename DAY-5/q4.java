//Java Program to print the duplicate elements of an array
import java.util.Scanner;

public class q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, mx = -1;
        n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            mx = Math.max(mx, arr[i]);
        }
        int array[] = new int[mx + 1];
        for (int i = 0; i < n; i++) {
            array[arr[i]]++;
        }
        for (int i = 0; i < mx + 1; i++) {
            if (array[i] >1)
                System.out.println(i);
        }
        sc.close();
    }
}
