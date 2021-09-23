//The selection sort algorithm sorts an array by repeatedly finding the maximum element (considering ascending order) from unsorted part and putting it at the last.
import java.util.*;

public class selectionSort_recursive
 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the number of elements");
        n = sc.nextInt();
        int a[] = new int[n];
        System.out.println("Enter the elements");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        selectionSort_recursive ob = new selectionSort_recursive();
        System.out.println("Sorted Array is");
        System.out.println(Arrays.toString(ob.selection(a, n)));
        sc.close();
    }

    int[] selection(int a[], int n) {
        if (n == 1)
            return a;
        int mx = a[0];
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > mx) {
                mx = a[i];
                index = i;
            }
        }
        a[index] = a[n - 1];
        a[n - 1] = mx;
        return selection(a, n - 1);
    }
}
/**
 * Time Complexicity: Worst Case-> O(n*n) Best Case -> O(n*n) Stability -> No It
 * programs well on small list or arrays.
 */