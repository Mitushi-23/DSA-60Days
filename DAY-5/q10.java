//Java Program to print the smallest element in an array
import java.util.Scanner;
public class q10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        int arr[]= new int [n];
        int mn= Integer.MAX_VALUE;
        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
            mn=Math.min(mn,arr[i]);
        }
        System.out.println(mn);
        sc.close();            
    }  
}

