#include <stdio.h>
#include <stdlib.h>

// Função auxiliar de comparaçao p dois pares (dificuldade e lucro) p ordenação
int comparePairs(const void* a, const void* b) {
    int* pairA = (int*)a;
    int* pairB = (int*)b;
    return pairA[0] - pairB[0]; // Compara com base na dificuldade
}

// Funçao para encontrar o lucro max
int maxProfitAssignment(int* difficulty, int difficultySize, int* profit, int profitSize, int* worker, int workerSize) {
    // Cria um array de pares (dificuldade e lucro)
    int jobs[difficultySize][2];
    for (int i = 0; i < difficultySize; ++i) {
        jobs[i][0] = difficulty[i];
        jobs[i][1] = profit[i];
    }
    
    // Ordena os trabalhos pela dificuldade
    qsort(jobs, difficultySize, sizeof(jobs[0]), comparePairs);

    // Pre-processa o lucro max em cada nivel de dificuldade
    int maxProfit[difficultySize];
    maxProfit[0] = jobs[0][1];
    for (int i = 1; i < difficultySize; ++i) {
        maxProfit[i] = maxProfit[i - 1] > jobs[i][1] ? maxProfit[i - 1] : jobs[i][1];
    }

    // Ordena os trabalhadores
    qsort(worker, workerSize, sizeof(int), comparePairs);

    // Computa o lucro total max
    int totalProfit = 0;
    int jobIndex = 0;

    for (int i = 0; i < workerSize; ++i) {
        // Move o jobIndex p o trabalho que o trabalhador atual pode realizar
        while (jobIndex < difficultySize && jobs[jobIndex][0] <= worker[i]) {
            ++jobIndex;
        }

        // Se o trabalhador pode realizar algum trabalho, adicione o lucro max possível
        if (jobIndex > 0) {
            totalProfit += maxProfit[jobIndex - 1];
        }
    }

    return totalProfit;
}

int main() {
    int difficulty1[] = {2, 4, 6, 8, 10};
    int profit1[] = {10, 20, 30, 40, 50};
    int worker1[] = {4, 5, 6, 7};
    int result1 = maxProfitAssignment(difficulty1, 5, profit1, 5, worker1, 4);
    printf("Exemplo 1: %d\n", result1); // Deve imprimir 100

    int difficulty2[] = {85, 47, 57};
    int profit2[] = {24, 66, 99};
    int worker2[] = {40, 25, 25};
    int result2 = maxProfitAssignment(difficulty2, 3, profit2, 3, worker2, 3);
    printf("Exemplo 2: %d\n", result2); // Deve imprimir 0

    int difficulty3[] = {10, 20, 30, 40};
    int profit3[] = {20, 40, 60, 80};
    int worker3[] = {5, 15, 25, 35, 45};
    int result3 = maxProfitAssignment(difficulty3, 4, profit3, 4, worker3, 5);
    printf("Exemplo 3: %d\n", result3); // Deve imprimir 200

    return 0;
}
