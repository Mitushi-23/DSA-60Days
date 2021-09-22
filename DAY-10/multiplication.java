import java.util.Scanner;

public class multiplication{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, m;
        n = sc.nextInt();
        m = sc.nextInt();
        int ans =mult(n,m); 
        System.out.println(ans);
        sc.close();
    }

    static int mult(int n, int m) {
        if (n == 0)
            return 0;
        return m + mult(n - 1, m);
    }
}
