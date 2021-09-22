import java.util.Scanner;

public class digitSum {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n;
            n = sc.nextInt();
            digitSum ob = new digitSum();
            System.out.println(ob.sum(n));
            sc.close();
        }
     int sum(int n)
     {
         if(n==0)
         return 0;
         return n%10 + sum(n/10);
     }
}
