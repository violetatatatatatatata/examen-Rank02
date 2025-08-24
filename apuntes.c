/* realloc()
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array; // Puntero para el array
    
    // Asignar memoria para 1 entero
    array = (int *)malloc(sizeof(int));
    if (array == NULL) return 1;

    *array = 10;
    
    // Redimensionar para 2 enteros
    array = (int *)realloc(array, 2 * sizeof(int));
    if (array == NULL) return 1;

    // Agregar un nuevo valor
    array[1] = 20;

    // Liberar memoria
    free(array);

    return 0;
}
*/
