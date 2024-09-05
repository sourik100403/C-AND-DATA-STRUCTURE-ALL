import java.util.Arrays;
public class arraysort{
    public static void main(String[] args) {
        int[] myArray={
            123,762,1872,8,190,234,323
        };
        String[] strArray={
            "sourik","papai","Diya"
        };
        System.out.println(Arrays.toString(myArray));
        Arrays.sort(myArray);
        System.out.println(Arrays.toString(myArray));
        System.out.println(Arrays.toString(strArray));
        Arrays.sort(strArray);
        System.out.println(Arrays.toString(strArray));
    }
}