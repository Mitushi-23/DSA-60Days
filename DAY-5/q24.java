//Print Odd and Even Number from an Array
import java.util.*;

public class q24 {
        public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          int n;
          n=sc.nextInt();
          int arr[]=new int[n];
          for(int i=0;i<n;i++)
          {
              arr[i] = sc.nextInt();
          }
          System.out.println("Odd numbers in an array");
          for(int i=0;i<n;i++)
          {
              if(arr[i]%2 !=0)
              System.out.print(arr[i]+" ");
          }
          System.out.println();
          System.out.println("Even numbers in an array");
          for(int i=0;i<n;i++)
          {
              if(arr[i]%2 ==0)
              System.out.print(arr[i]+" ");
          }
          System.out.println();
          sc.close();
        } 
}
