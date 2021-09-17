//Java Program to print the largest element in an array
import java.util.Scanner;
public class q9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        int arr[]= new int [n];
        int mx=-1;
        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
            mx=Math.max(mx,arr[i]);
        }
        System.out.println(mx);
        sc.close();            
    }  
}

