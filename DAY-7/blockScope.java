public class blockScope {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        System.out.println(b);

        {
            // int a=75l ERROR // if a value is intialized already in the same
            // function/method then it cannot
            // be reinitialized in the block.
            // value initialized in this block will remain in this block.
            int c = 20;
            a = 100; // but we can change the value
            System.out.println(a);
            System.out.println(c);

        }
        // System.out.println(c); ERROR
        System.out.println(a);
    }
}
/**
 * Rules for forloop scope are same as that of block scope. If value is already
 * initialized in the method then we cannot reinitialize in the same for loop
 * scope. We can change the value of the already initialized variable in the
 * scope. Value initialized in the loop scope remains in it only.
 */