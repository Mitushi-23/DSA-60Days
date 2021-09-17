//Java Program to print the sum of all the items of the array
import java.util.Scanner;
public class q12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        int arr[]= new int [n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
            sum+=arr[i];
        }
        System.out.println("Sum of the elements of array is "+sum);
        sc.close();            
    }  
}

