/*#include <stdio.h>

struct pair{
    int min, max;
};

void imprime(int *n){
    *n = *n +1;
    printf("Valor= %d\n", *n);
}

int main(void){
    struct pair p1 = {10,20};
    imprime(&p1.min);
    imprime(&p1.max);
    
    return 0;
}*/

#include <stdio.h>

typedef struct {
    int min, max;}Pair;
    Pair p;

void getmm(int v[], int n){
    for(int i=1; i<n; i++){
        if(Pair.min > v[i]) Pair.min = v[i];
        if(Pair.max < v[i]) Pair.max = v[i];
    }        
}

int main(void){
    int v[9] = {5, 7, 2, 8, -3, 1, 9, 6, 4};
    Pair p = getmm(v,9);
    printf("minimum item: %d\n", p.min);
    printf("Maximum item: %d\n", p.max);
    
    return 0;
}