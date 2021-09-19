import java.util.Scanner;

public class pallindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num;
        num = sc.nextInt();
        System.out.println(Pallindrome(num));
        sc.close();
    }

    static boolean Pallindrome(int n) {
        int num1 = n;
        int rev = 0;
        while (n != 0) {
            int r = n % 10;
            rev = rev * 10 + r;
            n = n / 10;
        }
        if (rev == num1)
            return true;
        else
            return false;
    }
}
