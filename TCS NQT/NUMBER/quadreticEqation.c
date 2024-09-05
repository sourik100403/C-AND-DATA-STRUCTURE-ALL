#include<stdio.h>
#include<math.h>
void roots(double a,double b,double c){
    double d=(b*b)-(4*a*c);
    //if d>0
    if(d>0){
        double root1=(-b+sqrt(d))/(2*a);
         double root2=(-b-sqrt(d))/(2*a);
         printf("first root: %0.2lf \n second root: %0.2lf ",root1,root2);
    }
    else if(d==0){
         double root1=-b/(2*a);
         double root2=-b/(2*a);
         printf("first root: %0.2lf \n second root: %0.2lf ",root1,root2);
    }
    else{
         double realpart=-b/(2*a);
         double img=sqrt(-d)/(2*a);
         printf("first root: %0.2lf + i%0.2lf \n second root:%0.2lf - i%0.2lf ",realpart,img,realpart,img);
    }

}
int main()
{
    double a = 1, b = 1, c = 1;
    roots(a,b,c);
}