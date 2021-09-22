import java.util.Scanner;

public class geometricSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k;
        k = sc.nextInt();
        System.out.println(gp(k));
        sc.close();
    }

    static double gp(int k) {
        if (k == 0)
            return 1;
        return (1 /  Math.pow(2, k)) + gp(k - 1);
    }
}
