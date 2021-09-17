
//Java Program to sort the elements of an array in ascending order
import java.util.Scanner;
import java.util.Arrays;

public class q14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
        sc.close();
    }

}
