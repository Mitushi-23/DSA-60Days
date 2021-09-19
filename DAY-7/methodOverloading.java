import java.util.Arrays;

/* Method overloading may have same function but with different arguements.
If any arguement is not passed in a function with same name then error (ambiguity) occurs. -> To resolve it this keyword is used.
* */
public class methodOverloading {
        public static void main(String[] args) {
            fun(3);
            fun("hello");
            fun(4,7,6,3,4,5,6,7);
            fun("Mitushi" , "Mitu" , "Rahul");
           int ans = sum(5,7);
            int ans1=sum(5,7,12);
            System.out.println(ans);
            System.out.println(ans1);
        }
        // static void fun(){
        //     System.out.println("ERROR");
        // }
        static void fun( int a){
            System.out.println(a);
        }
        static void fun(String name){
            System.out.println(name);
        }
        static void fun(int ...v){
            System.out.println(Arrays.toString(v));
        }

        static void fun(String ...v){
            System.out.println(Arrays.toString(v));
        }

       static int sum(int a, int b,int c){
            return a+b+c;
        }

       static int sum(int a, int b){
            return a+b;
        }
        
}
