#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

Vetor* vetor_cria(int n) {
    Vetor *v = (Vetor*) malloc(sizeof(Vetor));

    if (v == NULL) {
        return NULL;
    }

    v->tamanho = n;
    v->dados = (int*) malloc(n* sizeof(int));

    if (v->dados == NULL) {
        free(v);
        return NULL;
    }

    return v;
}

void vetor_libera(Vetor *v) {
    if (v != NULL) {
        free(v->dados);
        free(v);
    }
}

Vetor* vetor_copiar(Vetor *v) {
    Vetor *copia = vetor_cria(v->tamanho);
    if (copia == NULL) return NULL;

    for (int i = 0; i < v->tamanho; i++) {
        copia->dados[i] = v->dados[i];
    }

    return copia;
}

void vetor_imprimir(Vetor *v) {
    for (int i = 0; i < v->tamanho; i++) {
        printf("%d ", v->dados);
    }
    printf("\n");
}

void vetor_preencher_aleatorio(Vetor *v, int limite) {
    for (int i = 0; i < v->tamanho; i++) {
        v->dados[i] = rand() % limite;
    } 
}