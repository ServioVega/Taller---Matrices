#include <stdio.h>

int main() {
    // Declarar la matriz 3x3
    int matriz[3][3];

    // Inicializar la matriz con valores simétricos
    matriz[0][0] = 1;  // diagonal principal
    matriz[0][1] = 2;  // elemento simétrico de matriz[1][0]
    matriz[0][2] = 3;  // elemento simétrico de matriz[2][0]
    matriz[1][0] = 2;  // elemento simétrico de matriz[0][1]
    matriz[1][1] = 4;  // diagonal principal
    matriz[1][2] = 5;  // elemento simétrico de matriz[2][1]
    matriz[2][0] = 3;  // elemento simétrico de matriz[0][2]
    matriz[2][1] = 5;  // elemento simétrico de matriz[1][2]
    matriz[2][2] = 6;  // diagonal principal

    // Mostrar la matriz simétrica
    printf("Matriz simétrica:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}