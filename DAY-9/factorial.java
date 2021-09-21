import java.util.Scanner;
public class factorial {
        public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          int n;
         n = sc.nextInt();
         int ans = fact(n);
          System.out.println(ans);
          sc.close();
        }
        
        static int fact(int n){
            if(n==0)
            {
                return 1;
            }
            return n*fact(n-1);
        }
}

