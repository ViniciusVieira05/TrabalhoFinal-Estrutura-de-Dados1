#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "vetor.h"
#include "ordenacao.h"

int main() {
    SetConsoleOutputCP(65001);
    srand(time(NULL));

    int tamanhos[] = {10000, 50000, 100000, 30000};
    int quantidade = 4;

    clock_t inicio, fim;
    double tempo_bubble, tempo_selection, tempo_insertion, tempo_quick;

    printf("\nRESULTADOS DOS ALGORITMOS DE ORDENAÇÃO\n");
    printf("--------------------------------------\n");

    for (int t = 0; t < quantidade; t++) {
        int N = tamanhos[t];

        Vetor *original = vetor_cria(N);
        vetor_preencher_aleatorio(original, 100000);

        //===== BUBBLE SORT ===== 
        Vetor *v1 = vetor_copiar(original);
        inicio = clock();
        bubble_sort(v1);
        fim = clock();
        tempo_bubble = (double) (fim - inicio) / CLOCKS_PER_SEC;
        vetor_libera(v1);

        //===== SELECTION SORT =====
        Vetor *v2 = vetor_copiar(original);
        inicio = clock();
        selection_sort(v2);
        fim = clock();
        tempo_selection = (double)(fim - inicio) / CLOCKS_PER_SEC;
        vetor_libera(v2);


        //===== INSERTION SORT =====
        Vetor *v3 = vetor_copiar(original);
        inicio = clock();
        insertion_sort(v3);
        fim = clock();
        tempo_insertion = (double)(fim - inicio) / CLOCKS_PER_SEC;
        vetor_libera(v3);

        //===== QUICK SORT =====
        Vetor *v4 = vetor_copiar(original);
        inicio = clock();
        quick_sort(v4, 0, v4->tamanho - 1);
        fim = clock();
        tempo_quick = (double)(fim - inicio) / CLOCKS_PER_SEC;
        vetor_libera(v4);

        vetor_libera(original);

        printf("Vetor tamanho: %d\n", N);
        printf("Bubble Sort:    %.4f segundos\n", tempo_bubble);
        printf("Selection Sort: %.4f segundos\n", tempo_selection);
        printf("Insertion Sort: %.4f segundos\n", tempo_insertion);
        printf("Quick Sort:     %.4f segundos\n\n", tempo_quick);

    }

    return 0;
}
