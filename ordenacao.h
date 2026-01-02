#ifndef ORDENACAO_H
#define ORDENACAO_H

#include "vetor.h"

//========= ALGORITMOS =========
void bubble_sort(Vetor *v);
void selection_sort(Vetor *v);
void insertion_sort(Vetor *v);
void quick_sort(Vetor *v, int inicio, int fim);

#endif