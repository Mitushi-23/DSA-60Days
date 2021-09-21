import java.util.Scanner;

public class NoOfDigits {
        public static void main(String[] args) {
            Scanner sc=new Scanner (System.in);
            int n;
            n = sc.nextInt();
            int count=0;
            System.out.println(digit(n, count));
            sc.close();
        }
    static int digit(int n , int count){
        if(n==0)
        return count;
        ++count;
        return digit(n/10,count);
    }
}
