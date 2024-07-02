#include <stdio.h>

int main() {
    // Declarar matrices
    int matriz1[2][2] = { // Matriz 1
        {1, 2},
        {3, 4}
    };
    int matriz2[2][2] = { // Matriz 2
        {5, 6},
        {7, 8}
    };
    int resultado[2][2]; // Matriz resultado

    // Restar matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    // Mostrar matrices
    printf("Matriz 1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("Matriz 2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("Resultado de la resta:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}