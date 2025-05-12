#include <stdlib.h>
#include <stdio.h>
int main () {
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = 42;
    printf("Valor: %d\n", *ptr);
    free(ptr);
    printf("Memória liberada uma vez\n");
    return 0;
}
