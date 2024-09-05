public class searchArray {
    public static boolean findNum(int[] arr,int n){
        for(int i:arr){
            if(i==n){
                return true;
            }
        }
        return false;

    }
    public static void main(String[] args) {
        int[] myArray={67,66,454,897,909,123};
        boolean result= findNum(myArray, 13);
        if(result==true){
            System.out.println("find search element");
        }
        else{
            System.out.println("not found");
        }
    }
    
}
