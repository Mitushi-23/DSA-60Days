// Find Largest Number in an Array
import java.util.*;

public class q18 {
      public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          int n;
          n=sc.nextInt();
          int arr[] = new int [n];
          for(int i=0;i<n;i++)
          {
              arr[i] = sc.nextInt();
          }
          Arrays.sort(arr);
          System.out.println(arr[n-1]);
          sc.close();
      }
}
