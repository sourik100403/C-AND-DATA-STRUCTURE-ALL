public class searchPosition {
    public static void main(String[] args) {
        int[] arr={43,76,98,67,90,23};
        int number=2;
        int count=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==number){
                System.out.println(i+1);
                count++;
                break;
            }
        }
        if(count==0){
            System.out.println("not present");
        }
    }
    
}
