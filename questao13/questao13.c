#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void alimenta(float *vetor, int n){
    for(int i = 0; i < n; i++){
        vetor[i] = rand()%100;
    }
}

void ordena(float *vetor, int n) {
    float aux;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

}

void mostrar(float *vetor, int n){
    for(int i = 0; i < n; i++){
        printf(" %.2f ", vetor[i]);
    }
    printf("\n");
}

int main(){
    int n = 10;
    float *v;

    v = malloc(n * sizeof(float));

    alimenta(v, n);
    mostrar(v, n);
    ordena(v, n);
    mostrar(v, n);


    free(v);
    return 0;
}
