import java.util.Arrays;

public class insertionSort_recursive {
    public static void main(String[] args) {
        int a[] = {3,6,5,3,7,1,2};
        int i=0;
        insertionSort_recursive ob = new insertionSort_recursive();
        System.out.println(Arrays.toString(ob.InsertionSort(a, i)));
    }

    int[] InsertionSort(int a[], int i) {
        if (i == a.length - 1)
            return a;
            int j=i+1;
        swap(a, j);
        return InsertionSort(a, i+1);
    }

    int[] swap(int a[], int j) {
        if(j<1)
        return a;
        if (a[j] < a[j - 1]) {
            int k = a[j];
            a[j] = a[j - 1];
            a[j - 1] = k;
        } else {
            return a;
        }

        return swap(a,j-1);
    }
}
