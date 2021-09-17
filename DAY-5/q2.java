//Java Program to find the frequency of each element in the array
import java.util.Scanner;

public class q2 {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n , mx=-1;
            n=sc.nextInt();
            int arr[]= new int [n];
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
                mx = Math.max(mx,arr[i]);
            }
            int array[] = new int [mx+1];
            for(int i=0;i<n ;i++)
            {
                array[arr[i]]++;
            }
            System.out.println("Element   Frequency");
            for(int i=0;i<=mx;i++)
            {
                if(array[i]!=0)
                System.out.println(i + "           " + array[i]);
            }
            sc.close();
        }
    
    
}
