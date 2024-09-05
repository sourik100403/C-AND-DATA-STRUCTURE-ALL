import java.util.*;
public class myclass{
    public static void main(String[] args) {
        System.out.println("enter the steing:\n");
        @SuppressWarnings("resource")
        Scanner obj=new Scanner(System.in);
        String text=obj.nextLine();
        int count=0;
        for(int i=0;i<text.length();i++){
           char ch=text.charAt(i);
           if(ch>='a' && ch<='z'){
            count++;
           }
        }
        if(count==0){
            System.out.println("enter the steing:\n");
        }
        else{
            System.out.println(count);
        }
    }
}