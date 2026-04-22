//
// Created by Lucas Hemkemeier on 16/04/2026.
//
#include <stdio.h>
#include <stdlib.h>

int todosPositivos(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Avaliando a posição: %d\n Valor: %d\n", i, v[i]);
        if (v[i] > 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    // int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    // int tamanho = 10; vetor 'vazio'

    int vetor[1];
    int tamanho = 0;

    if (todosPositivos(vetor, tamanho)) {
        printf("Todos os elementos são positivos. \n");
    } else {
        printf("Existem elementos negativos.");
    }
    return 0;
}