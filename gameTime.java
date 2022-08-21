import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();
        if(x<y) System.out.printf("O JOGO DUROU %d HORA(S)",y-x);
        else System.out.printf("O JOGO DUROU %d HORA(S)",y-x+24);
    }
}