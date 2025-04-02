#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define N 20

int main(){
int i;
double vt[N];
for(i = 0;i<N; i++){
    vt[i]=1+rand()%100;
    printf("Elemnento %d: %.2f\n",i+1,vt[i]);
}
}