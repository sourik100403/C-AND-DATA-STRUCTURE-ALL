#include <stdio.h>

int main() {
    // Write C code here
    // printf("Hello world");
    int x=5,z=9,y;
    y=(x++,--z,++x,z++);
    printf("%d %d %d ",x,y,z);
    

    return 0;
}