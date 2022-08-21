import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        double  x1=sc.nextDouble();
        double  y1=sc.nextDouble();
        double  x2=sc.nextDouble();
        double  y2=sc.nextDouble();
        double  x=Math.pow(x2-x1,2);
        double  y=Math.pow(y2-y1,2);
        System.out.printf("%.4f",Math.sqrt(x+y));
    }
}
