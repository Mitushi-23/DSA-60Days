import java.util.Arrays;
import java.util.Scanner;

public class bubbleSort {
    public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            int n;
            n=sc.nextInt();
            int arr[] = new int [n];
            for(int i=0;i<n;i++)
            {
                arr[i]=sc.nextInt();
            }
            int c=0;
            System.out.println("Sorted array is "+Arrays.toString(bubblesort(arr, n, c)));
            sc.close();
        }

    static int[] bubblesort(int arr[], int n , int c) {
        if(n==0)
        return arr;
        for (int i = 0; i < n-1; i++) {
            if (arr[i] > arr[i+1]) {
                swap(arr, i);
                ++c;
            }
        }
        return bubblesort(arr, n-1, c);
    }

    static void swap(int arr[] , int i) {
        int k;
        k = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = k;
    }

}
/**
* Space Complexicity: O(1) constant // no extra space is required i.e copying of array etc. is not done -> also known as inplace sorting algorithm.
* Time Complexicity: Best Case-> O(N) Array is already sorted
                     Worst Case-> O(N*N) Array is sorted in opposite direction
As the size of array is growing the number of comparisions also growing. -> time complexicity
* Stable sorted algorithm: When the order is maintained for the same values after sorting.
* Unstable sorted algorithm: When the order is not maintained for the same values after sorting.
*/