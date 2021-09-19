// Shadowing is done when a same variable overwrites it in a certain scope.
public class Shadowing {
    static int x = 40; // this will be shadowed at line 7 

    public static void main(String[] args) {
        System.out.println(x); //40
        int x; // declaration the class variable at line 3 is shadowed by this.
        //System.out.println(x); scope will begin when value is initialized.
        x=10; // initialoization
        System.out.println(x); // 10
        value();
    }

    static void value() {
        System.out.println(x); // 40
    }
}
