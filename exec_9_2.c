#include <stdio.h>

typedef struct {
    int min, max;} Pair;
     
Pair getmm(int v[], int n){
    Pair mm = {v[0],v[0]}; 
    for(int i=1; i<n; i++)
        if(v[i] < mm.min) mm.min = v[i];
        else if(v[i] > mm.max) mm.max = v[i];
    return mm;        
}

int main(void){
    int v[9] = {5, 7, 2, 8, -3, 1, 9, 6, 4};
    Pair p = getmm(v,9);
    printf("minimum item: %d\n", p.min);
    printf("Maximum item: %d\n", p.max);
    
    return 0;
}