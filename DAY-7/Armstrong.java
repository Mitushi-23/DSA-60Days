

public class Armstrong {
    public static void main(String[] args) {
       
        for(int num =100; num<=999;num++)
        armstrong(num);
    }

    static void armstrong(int n) {
        int number =n;
        int sum = 0;
        while(n!=0)
        {
            int r= n%10;
            sum+= r*r*r;
            n=n/10;
        }
        if(sum == number)
        System.out.println(sum);
    }

}
