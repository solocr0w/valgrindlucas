#include <stdlib.h>
#include <stdio.h>
int main () {
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = 42;
    printf("Valor inicial: %d\n", *ptr);
    free(ptr);
    //poderia realocar, mas preferi remover, estou com H1N1, desculpa
    return 0;
}
