import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n/2+1;i++)
        {
            int x=n/2+1-i;
            while(x!=0)
            {
                System.out.printf(" ");
                x--;
            }
            for(int k=1;k<=i*2-1;k++)
            {
                System.out.printf("*");
            }
            System.out.printf("\n");
        }
        for(int i=n/2;i>0;i--)
        {
            int x=n/2+1-i;
            while(x!=0)
            {
                System.out.printf(" ");
                x--;
            }
            for(int k=0;k<i*2-1;k++)
            {
                System.out.printf("*");
            }
            System.out.printf("\n");
        }
    }
}