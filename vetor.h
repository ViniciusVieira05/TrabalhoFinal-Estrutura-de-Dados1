#ifndef VETOR_H
#define VETOR_H

typedef struct {
    int *dados;
    int tamanho;
} Vetor;

//========== GERENCIAMENTO DO VETOR =========
Vetor* vetor_cria(int tamanho);
void vetor_libera (Vetor * v);
void vetor_preencher_aleatorio(Vetor *v, int limite);
Vetor* vetor_copiar(Vetor *v);
void vetor_imprimir(Vetor *v);

#endif