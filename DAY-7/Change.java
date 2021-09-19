import java.util.*;

public class Change {
        public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            int arr[] = {2,5 ,34,7,5,6,87,9};
            change(arr);
            System.out.println(Arrays.toString(arr));
            sc.close();
        }
        static void change(int a[]) // here the referance of the variable is passed by call by value only
        {
            a[0] = 20; // if you make the change in object via this referance variable, same value of object will be changed
        }
}
