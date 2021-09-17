// Find 2nd Smallest Number in an Array
import java.util.*;

public class q19 {
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
          int mn=arr[0];
          int c=0;
          for(int i=1;i<n;i++)
          {
              if(arr[i]>mn)
              {
                  mn=arr[i];
                  ++c;
              }
              if(c==1)
              break;
          }
          System.out.println(mn);
          sc.close();
      }
}
