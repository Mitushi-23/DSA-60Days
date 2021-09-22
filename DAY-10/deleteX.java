import java.util.Scanner;

public class deleteX {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s;
        s= sc.next();
        int l = s.length();
        int i=0;
      delete(s, l,i);
      System.out.println() ;

        sc.close();
    }

    static void delete(String s, int l, int i) {
        if (l == 0)
            return;
        if (s.charAt(i) != 'x') {
            System.out.print(s.charAt(i)) ;
        }
        i++;
         delete(s, l-1,i);

    }
}
