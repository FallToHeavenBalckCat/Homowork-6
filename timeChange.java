import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int h=n/3600;
        n=n%3600;
        int min=n/60;
        n=n%60;
        int s=n;
        System.out.printf("%d:%d:%d",h,min,s);
    }
}