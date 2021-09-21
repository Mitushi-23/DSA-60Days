import java.util.Scanner;

public class Fibonacii {
        public static void main(String[] args) {
            Scanner sc= new Scanner(System.in);
            int n;
            n=sc.nextInt();
          System.out.println( fibonacii(n));
            sc.close();
        }
    static int fibonacii(int n)
    {
        if(n==1)
        return 1;
        else
        if(n==0)
        return 0;
        else
        return fibonacii(n-1) + fibonacii(n-2) ;
       
    }
}
