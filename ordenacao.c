#include "ordenacao.h"

// ========== BUBBLE SORT ==========
void bubble_sort(Vetor *v) {
    int aux;

    for (int i = 0; i < v->tamanho - 1; i++) {
        for (int j = 0; j < v->tamanho - i - 1; j++) {
            if (v->dados[j] > v->dados[j + 1]) {
                aux = v->dados[j];
                v->dados[j] = v->dados[j + 1];
                v->dados[j + 1] = aux;
            }
        }
    }
}

// ========== SELECTION SORT ==========
void selection_sort(Vetor *v) {
    int min, aux;

    for (int i = 0; i < v->tamanho - 1; i++) {
        min = i;
        for (int j = i + 1; j < v->tamanho; j++) {
            if (v->dados[j] < v->dados[min]) {
                min = j;
            }
        }
        aux = v->dados[i];
        v->dados[i] = v->dados[min];
        v->dados[min] = aux;
    }
}

// ========== INSERTION SORT ==========
void insertion_sort(Vetor *v) {
    int chave, j;

    for (int i = 1; i < v->tamanho; i++) {
        chave = v->dados[i];
        j = i - 1;

        while (j >= 0 && v->dados[j] > chave) {
            v->dados[j + 1] = v->dados[j];
            j--;
        }
        v->dados[j + 1] = chave;
    }
}

// ========== QUICK SORT 
static int particiona(Vetor *v, int inicio, int fim) {
    int pivo = v->dados[fim];
    int i = inicio - 1;
    int aux;

    for (int j = inicio; j < fim; j++) {
        if (v->dados[j] <= pivo) {
            i++;
            aux = v->dados[i];
            v->dados[i] = v->dados[j];
            v->dados[j] = aux;
        }
    }

    aux = v->dados[i + 1];
    v->dados[i + 1] = v->dados[fim];
    v->dados[fim] = aux;

    return i + 1;
}

void quick_sort(Vetor *v, int inicio, int fim) {
    if (inicio < fim) {
        int p = particiona(v, inicio, fim);
        quick_sort(v, inicio, p - 1);
        quick_sort(v, p + 1, fim);
    }
}