import java.util.Scanner;

public class PythagorianTriplet {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n1,n2,n3;
            n1=sc.nextInt();
            n2=sc.nextInt();
            n3=sc.nextInt();
            System.out.println(check(n1,n2,n3));
            sc.close();
        }
    static boolean check(int a, int b, int c)
    {
        if(((a*a + b*b) == c*c) || ((a*a + c*c) == b*b) || ((c*c + b*b) == a*a))
        return true;
        else
        return false;
    }
    
}
