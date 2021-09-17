// Find Largest Number in an Array
import java.util.*;

public class q21 {
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
          for(int i=0;i<n-1;i++)
          {
              if(arr[i]!=arr[i+1])
              {
                  System.out.print(arr[i]+" ");
              }
            }
              if(arr[n-2]!=arr[n-1])
              {
                  System.out.println(arr[n-1]);
              }
          
          sc.close();
      }
}
