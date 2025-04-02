#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

#define N 5
#define M 7

int main(){
    int i, j;
    int mt[N][M];
    int *p = (int*) mt;  // Apunta al primer elemento de la matriz
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            *(p + (i * M + j)) = 1 + rand() % 100;  
            printf("%d ", *(p + (i * M + j)));      
        }
        printf("\n");
    }
    
    return 0;
}
