import java.util.Scanner;

public class pallindrome {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            String s;
            s = sc.next();
            int l= s.length();
            int i=0;
          System.out.println(check(s, l, i));  
            sc.close();
        }
        static boolean check(String s, int l , int i)
        {
            if(l==0 && s.equals(""))
            return false;
            else
            if(l==0)
            return true;
            if(s.charAt(i)!=s.charAt(l-1))
            return false;
            return check(s, l-1, i+1);
        }
}
