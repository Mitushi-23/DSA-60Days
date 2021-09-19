//Variable and Arguments
import java.util.Arrays; 
public class VarArgs {
        public static void main(String[] args) {
            fun(3,6,4,7,5,34,5,55,6);
            fun();
            fun1(3,7,"hubfe","ebhufheug","nhrgjr");
        }
        static void fun(int ...v){
            System.out.println(Arrays.toString(v));
        }

        static void fun1(int a, int b, String ...v){
            System.out.println(Arrays.toString(v));

        }
}
