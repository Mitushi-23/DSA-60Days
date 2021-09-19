import java.util.Scanner;

public class changeName {
     public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         System.out.print("Enter the name: ");
         String name; // creating new object
         name = sc.next();
         change(name);
         System.out.println("Name is "+ name); 
         sc.close();
     }
     static void change(String naam)
     {
         naam = "Rahul"; // creating new object
     }   
}
