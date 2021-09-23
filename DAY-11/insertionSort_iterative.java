/** 
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
Algorithm 
To sort an array of size n in ascending order: 
1: Iterate from arr[1] to arr[n] over the array. 
2: Compare the current element (key) to its predecessor. 
3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
Example: 
 12, 11, 13, 5, 6
Let us loop for i = 1 (second element of the array) to 4 (last element of the array)
i = 1. Since 11 is smaller than 12, move 12 and insert 11 before 12 
11, 12, 13, 5, 6
i = 2. 13 will remain at its position as all elements in A[0..I-1] are smaller than 13 
11, 12, 13, 5, 6
i = 3. 5 will move to the beginning and all other elements from 11 to 13 will move one position ahead of their current position. 
5, 11, 12, 13, 6
i = 4. 6 will move to position after 5, and elements from 11 to 13 will move one position ahead of their current position. 
5, 6, 11, 12, 13 
 */

import java.util.*;

public class insertionSort_iterative {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n;
            System.out.println("Enter the value of n");
            n = sc.nextInt();
            int a[] = new int [n];
            System.out.println("Enter the value of elements");
            for(int i=0;i<n;i++)
            {
                a[i] = sc.nextInt();
            }
            insertionSort_iterative ob= new insertionSort_iterative();
            System.out.println(Arrays.toString(ob.InsertionSort(a, n)));
            sc.close();
        }
    
    int[] InsertionSort(int a[], int n)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1; j>=1;j--)
            {
                if(a[j]<a[j-1])
                {
                    int k = a[j];
                    a[j]=a[j-1];
                    a[j-1] =k;
                }
                else
                break;
            }
        }
        return a;
    }
}
