#include <stdio.h>

int main() {
    // Declarar la matriz 2x5
    int matriz2[2][5];

    // Inicializar la matriz con valores
    matriz2[0][0] = 1;
    matriz2[0][1] = 2;
    matriz2[0][2] = 3;
    matriz2[0][3] = 4;
    matriz2[0][4] = 5;
    matriz2[1][0] = 6;
    matriz2[1][1] = 7;
    matriz2[1][2] = 8;
    matriz2[1][3] = 9;
    matriz2[1][4] = 10;

    // Mostrar la matriz completa
    printf("Matriz completa:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    // Imprimir los 4 elementos de las esquinas de la matriz
    printf("\nLos 4 elementos de las esquinas de la matriz son:\n");
    printf("Esquina superior izquierda: %d\n", matriz2[0][0]);
    printf("Esquina superior derecha: %d\n", matriz2[0][4]);
    printf("Esquina inferior izquierda: %d\n", matriz2[1][0]);
    printf("Esquina inferior derecha: %d\n", matriz2[1][4]);

    return 0;
}