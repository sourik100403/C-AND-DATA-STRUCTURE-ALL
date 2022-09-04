//  QUICK  SORT  PROGRAM

#include<stdio.h>

void Quick_Sort(int[], int, int);
int split(int[], int, int);

int main()
{
 int a[12], n, i, lower, upper;
 printf("Enter Total Number Of Terms: ");
 scanf("%d",&n);

 printf("Enter Numbers One by One:-\n");
 for(i=0; i<n; i++)
    scanf("%d",&a[i]);
 lower = 0;
 upper = (n-1);

 Quick_Sort(a, lower, upper);
 printf("\nSorted Numbers Are:-\n");
 for(i=0; i<n; i++)
    printf("%d",a[i]);
}


void Quick_Sort(int a[], int lower, int upper)
{
 int pos;
 if(lower < upper)
   {
     pos = split(a, lower, upper);
     Quick_Sort(a, lower, pos-1);
     Quick_Sort(a, pos+1, upper);
   }
}

int split(int a[], int lower, int upper)
{
 int pivort, p, q, temp;
 pivort = a[lower];
 p = lower + 1;
 q = upper;

 while(p <= q)
   {
    while(a[p] < pivort)
       p++;
    while(a[q] > pivort)
       q--;
    if(p < q)
      {
       temp = a[p];
       a[p] = a[q];
       a[q] = temp;
      }
   }
 temp = a[lower];
 a[lower] = a[q];
 a[q] = temp;
 return (q);
}
