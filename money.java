import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        System.out.println(x);
        int bp=x/100;
        System.out.printf("%d nota(s) de R$ 100,00\n",bp);
        x=x%100;
        int sp=x/50;
        System.out.printf("%d nota(s) de R$ 50,00\n",sp);
        x=x%50;
        int g2p=x/20;
        System.out.printf("%d nota(s) de R$ 20,00\n",g2p);
        x=x%20;
        int g1p=x/10;
        System.out.printf("%d nota(s) de R$ 10,00\n",g1p);
        x=x%10;
        int g5p=x/5;
        System.out.printf("%d nota(s) de R$ 5,00\n",g5p);
        x=x%5;
        int g22p=x/2;
        System.out.printf("%d nota(s) de R$ 2,00\n",g22p);
        x=x%2;
        System.out.printf("%d nota(s) de R$ 1,00\n",x);
    }
}