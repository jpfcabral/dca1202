#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void alimenta(float *vetor, int n){ // Escolhe numeros aleatorios para o vetor
    for(int i = 0; i < n; i++){
        vetor[i] = rand()%100;
    }
}

int ordena(const void *a, const void *b) { // Declaração da função tendo como entrada A e B destituidos de seus tipos
    return ( *(float*)a - *(float*) b); // Retorna a subtração de A e B convertidos para float
}

void mostrar(float *vetor, int n){ // Printa os valores do vetor
    for(int i = 0; i < n; i++){
        printf(" %.2f ", vetor[i]);
    }
    printf("\n");
}

int main(){
    int n = 10; // Declaracao de n
    float *v; // Declaracao de ponteiro

    v = malloc(n * sizeof(float)); // Aloca o vetor na memoria

    alimenta(v, n); // Escolhe numeros aleatorios para o vetor
    mostrar(v, n); // Mostra na tela o vetor
    qsort(v, n, sizeof (float), ordena); // Implementacao do qsort
    mostrar(v, n); // Mostra na tela o vetor


    free(v); // Libera a memoria alocada para o vetor
    return 0;
}
