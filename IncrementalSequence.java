import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int x;
        do{
            x=sc.nextInt();
            if(x==0) break;
            for(int i=1;i<=x;i++)
            {
                System.out.printf("%d ",i);
            }
            System.out.printf("\n");
        }while(x!=0);
    }
}