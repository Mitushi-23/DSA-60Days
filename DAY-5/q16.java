// Find 3rd Largest Number in an Array
import java.util.*;

public class q16 {
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
          int mx=arr[n-1];
          int c=0;
          for(int i=n-2;i>=0;i--)
          {
              if(arr[i]<mx)
              {
                  mx=arr[i];
                  ++c;
              }
              if(c==2)
              break;
          }
          System.out.println(mx);
          sc.close();
      }
}
