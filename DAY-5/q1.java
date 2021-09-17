//Java Program to copy all elements of one array into another array
import java.util.Scanner;

public class q1 {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n;
            n=sc.nextInt();
            int arr[]= new int [n];
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
            }
            int brr[] = new int [n];
            for(int i=0;i<n;i++)
            {
                brr[i] = arr[i];
            }
            for(int i=0;i<n;i++)
            {
                System.out.print(brr[i] + " ");
            }
            System.out.println();
            sc.close();            
        } 
}
