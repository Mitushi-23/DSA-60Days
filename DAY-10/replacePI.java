import java.util.Scanner;

public class replacePI {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        s = s.replace("pi", "3.14");
        System.out.println(s);
        sc.close();
    }
}
