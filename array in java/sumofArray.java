class sumofArray{
    public static void main(String[] args) {
        int[] numberArray={1,22,3,4,56,7,8};
        int sum=0;
        for(int temp:numberArray){
            sum+=temp;
        }
        System.out.println(sum);
    }
}