#include <stdio.h>

int main() {
    int matriz[3][3] = { // Matriz predeterminada 3x3
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int filas, columnas;

    // Mostrar la matriz predeterminada
    printf("Matriz predeterminada:\n");
    for (filas = 0; filas < 3; filas++) {
        for (columnas = 0; columnas < 3; columnas++) {
            printf("%d ", matriz[filas][columnas]);
        }
        printf("\n");
    }

    // Mostrar el número de filas y columnas
    printf("La matriz tiene %d filas y %d columnas.\n", 3, 3);

    return 0;
}