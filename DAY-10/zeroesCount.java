import java.util.*;

public class zeroesCount {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n;
            n=sc.nextInt();
            int a[] = new int [n];
            for(int i=0;i<n;i++)
            {
                a[i] = sc.nextInt();
            }
            zeroesCount m = new zeroesCount();
            int count=0;
            System.out.println(m.zeroes(a, n, count));
            sc.close();
        }
  int zeroes(int[] a,int n, int count)
 {
     if(n==0)
     return count;
     if(a[n-1]==0)
     ++count;
     return zeroes(a, n-1, count);
 }   
    
}
