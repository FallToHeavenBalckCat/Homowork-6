import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String str1=sc.nextLine();
        String str2=sc.nextLine();
        String str3=sc.nextLine();
        if(str1.equals("vertebrado"))
        {
            if(str2.equals("ave"))
            {
                if(str3.equals("carnivoro")) System.out.println("aguia");
                else System.out.println("pomba");
            }
            else
            {
                if(str3.equals("onivoro")) System.out.println("homem");
                else System.out.println("vaca");
            }
        }
        else if(str1.equals("invertebrado"))
        {
            if(str2.equals("inseto"))
            {
                if(str3.equals("hematofago")) System.out.println("pulga");
                else System.out.println("lagarta");
            }
            else if(str2.equals("anelideo"))
            {
                if(str3.equals("hematofago")) System.out.println("sanguessuga");
                else System.out.println("minhoca");
            }
        }
    }
}