#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void alimenta(float *vetor, int n){ // Escolhe numeros aleatorios para o vetor
    for(int i = 0; i < n; i++){
        vetor[i] = rand()%100;
    }
}

float compare(float a, float b) { // Declaração da função tendo como entrada A e B destituidos de seus tipos
    return (a - b); // Retorna a subtração de A e B convertidos para float
}

void mostrar(float *vetor, int n){ // Printa os valores do vetor
    for(int i = 0; i < n; i++){
        printf(" %.2f ", vetor[i]);
    }
    printf("\n");
}

void jpsort(float *vetor, int num, float (*funcao)(float, float)){
    int aux;

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num - 1; j++){
            if(funcao(vetor[j], vetor[j+1])>0){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

int main(){
    int n = 10; // Declaracao de n
    float *v; // Declaracao de ponteiro

    v = malloc(n * sizeof(float)); // Aloca o vetor na memoria

    alimenta(v, n); // Escolhe numeros aleatorios para o vetor
    mostrar(v, n); // Mostra na tela o vetor
    jpsort(v, n, compare); // Implementacao do qsort
    mostrar(v, n); // Mostra na tela o vetor


    free(v); // Libera a memoria alocada para o vetor
    return 0;
}
