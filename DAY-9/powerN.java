import java.util.Scanner;

public class powerN {
        public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);
           int x,n;
           x=sc.nextInt();
           n=sc.nextInt();
           System.out.println(power(n,x));
           sc.close();
        }

        static int power(int n , int x)
        {
            if(n==0)
            return 1;
            return x*power(n-1 , x);
        }
}
