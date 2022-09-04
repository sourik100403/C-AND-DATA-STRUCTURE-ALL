#include<stdio.h>
int main()
{
	int arr[]={12,13,14,15,16,17,18,19};
	printf("the value is %d",arr[0]);
    printf("the aderres of the first element is %d\n",&arr[0]);
    printf("the aderres of the first element is %d\n",arr);
    printf("the aderres of the first element is %d\n",&arr[1]);
    printf("the aderres of the first element is %d\n",arr+1);
    
    //printf("the value is %d",arr[0]);
    printf("the value at aderres of the first element of arry is %d\n",*(&arr[0]));
    printf("the value at aderres of the first element of arry is %d\n",arr[0]);
    printf("the value at aderres of the first element of arry is %d\n",*(arr));
      printf("the value at aderres of the second element of arry is %d\n",*(&arr[1]));
        printf("the value at aderres of the second element of arry is %d\n",(arr[1]));
          printf("the value at aderres of the second  element of arry is %d\n",*(arr+1));

	return 0;
}
