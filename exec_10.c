#include <stdio.h>


void adjust(int *x, int *y){
        int n = *x;
        if ( *x > *y) {
             *x = *y;
             *y = n;}
}

int main (void){
    int a=6; int b=5; int c=3; int d=4; int e=2; int f=1;

    adjust(&a, &b);
    printf("a= %d, b= %d\n", a, b);
    adjust(&c, &d);
    printf("c= %d, d= %d\n", c, d);
    adjust(&e, &f);
    printf("e= %d, f= %d\n", e, f);

    return 0;
}

