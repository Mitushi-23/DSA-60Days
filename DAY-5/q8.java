//Java Program to print the elements of an array present on odd position
import java.util.Scanner;
public class q8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        int arr[]= new int [n];
        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
        }
        for(int i=0;i<n;i+=2)
        {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        sc.close();            
    }  
}
