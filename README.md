# Algoritmos de Ordenação em C

Projeto desenvolvido para a disciplina de **Estrutura de Dados**, com o objetivo de implementar e comparar o desempenho de diferentes algoritmos de ordenação utilizando a linguagem **C**.

---

## 📌 Objetivos do Projeto

- Implementar algoritmos clássicos de ordenação
- Utilizar estrutura de dados com **alocação dinâmica**
- Realizar **benchmark** com diferentes tamanhos de vetor
- Comparar o tempo de execução entre os algoritmos

---

## 🧠 Algoritmos Implementados

- Bubble Sort
- Selection Sort
- Insertion Sort
- Quick Sort

---

## ⚙️ Funcionalidades

- Criação dinâmica de vetores
- Preenchimento com valores aleatórios
- Cópia segura de vetores para testes independentes
- Liberação correta de memória
- Medição de tempo de execução
- Testes com múltiplos tamanhos de entrada

---

## ⏱️ Metodologia de Benchmark

Para cada tamanho de vetor:

1. Um vetor original é criado e preenchido aleatoriamente
2. O vetor é copiado para cada algoritmo
3. Cada algoritmo é executado de forma independente
4. O tempo de execução é medido com `clock()`
5. Os resultados são exibidos no terminal

Essa abordagem garante **igualdade de condições** entre os algoritmos.
