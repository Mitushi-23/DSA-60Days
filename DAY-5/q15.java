
//Java Program to sort the elements of an array in descending order
import java.util.Scanner;
import java.util.Arrays;


public class q15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        for(int i=n-1;i>=0;i--)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        sc.close();
    }

}

//import java.util.Collections;
//Arrays.sort(arr, Collections.reverseOrder);