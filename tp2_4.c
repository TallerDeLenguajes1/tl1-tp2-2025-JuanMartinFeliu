#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

struct{
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
} typedef compu; 

void listarPCs(compu pcs[5],int cantidad){
    int i;
    for(i=0;i<cantidad;i++){
        printf("Mostrando PC N%d\n",i+1);
        printf("\tVelocidad:%d\n",pcs[i].velocidad);
        printf("\tAño:%d\n",pcs[i].anio);
        printf("\tCantidad de nucleos:%d\n",pcs[i].cantidad_nucleos);
        printf("\tTipo de procesador:%s\n\n",pcs[i].tipo_cpu);
        
        
    }
}

void mostrarMasVieja(compu pcs[5],int cantidad){
    int i,masVieja=3000,aux;
    for(i=0;i<cantidad;i++){
        if(pcs[i].anio < masVieja){
            masVieja = pcs[i].anio;
            aux = i;
        }
    }
    printf("La pc mas vieja es la del año %d y tiene las siguientes caracteristicas:\n",masVieja);
    printf("\tVelocidad:%d\n",pcs[aux].velocidad);
    printf("\tAño:%d\n",pcs[aux].anio);
    printf("\tCantidad de nucleos:%d\n",pcs[aux].cantidad_nucleos);
    printf("\tTipo de procesador:%s\n\n",pcs[aux].tipo_cpu);
}

void mostrarMasVeloz(compu pcs[5],int cantidad){
    int i,masVeloz = 0, aux;
    for(i=0;i<cantidad;i++){
        if(pcs[i].velocidad > masVeloz){
            masVeloz = pcs[i].velocidad;
            aux = i;
        }
    }
    printf("La pc mas veloz es la de velocidad %d y tiene las siguientes caracteristicas:\n",masVeloz);
    printf("\tVelocidad:%d\n",pcs[aux].velocidad);
    printf("\tAño:%d\n",pcs[aux].anio);
    printf("\tCantidad de nucleos:%d\n",pcs[aux].cantidad_nucleos);
    printf("\tTipo de procesador:%s\n\n",pcs[aux].tipo_cpu);

}

int main(){
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};
    srand(time(NULL));
    printf("GENERANDO DATOS...\n");

    compu PC1,PC2,PC3,PC4,PC5;

    PC1.velocidad = (rand() % (3 - 1 + 1)) + 1;
    PC1.anio = (rand() % (2024 - 2015 + 1)) + 2015 ;
    PC1.cantidad_nucleos = (rand() % (8 + 1 - 1)) + 1;
    PC1.tipo_cpu = tipos[(rand() % (5 + 1 - 0))];
    
    PC2.velocidad = (rand() % (3 - 1 + 1)) + 1;
    PC2.anio = (rand() % (2024 - 2015 + 1)) + 2015 ;
    PC2.cantidad_nucleos = (rand() % (8 + 1 - 1)) + 1;
    PC2.tipo_cpu = tipos[(rand() % (5 + 1 - 0))];

    PC3.velocidad = (rand() % (3 - 1 + 1)) + 1;
    PC3.anio = (rand() % (2024 - 2015 + 1)) + 2015 ;
    PC3.cantidad_nucleos = (rand() % (8 + 1 - 1)) + 1;
    PC3.tipo_cpu = tipos[(rand() % (5 + 1 - 0))];

    PC4.velocidad = (rand() % (3 - 1 + 1)) + 1;
    PC4.anio = (rand() % (2024 - 2015 + 1)) + 2015 ;
    PC4.cantidad_nucleos = (rand() % (8 + 1 - 1)) + 1;
    PC4.tipo_cpu = tipos[(rand() % (5 + 1 - 0))];

    PC5.velocidad = (rand() % (3 - 1 + 1)) + 1;
    PC5.anio = (rand() % (2024 - 2015 + 1)) + 2015 ;
    PC5.cantidad_nucleos = (rand() % (8 + 1 - 1)) + 1;
    PC5.tipo_cpu = tipos[(rand() % (5 + 1 - 0))];

    compu pcs[5] = {PC1,PC2,PC3,PC4,PC5};

    // Empiezan las funciones
    listarPCs(pcs,5);
    mostrarMasVieja(pcs,5);
    mostrarMasVeloz(pcs,5);

}