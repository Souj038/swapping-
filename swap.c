#include <stdio.h>
int main() {
    int x,y;
    printf("enter the value of x and y");
    scanf("%d%d", &x,&y);
    printf("Before swapping the value of x is %d and the value of y is %d\n",x,y);
    x = x+y;
    y = x-y;
    x= x-y;
    printf("\nafter swapping the value of x is %d and the value of y is %d",x,y);
    
    return 0;
}
