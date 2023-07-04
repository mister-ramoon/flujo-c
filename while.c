#include <stdio.h>
int n = 20;

int main() {

    while (n > 10) {
        printf("n es igual a %d\n", n);
        n = n - 1;
    }
    printf("Fin del ciclo, porque n es igual o menor a 10\n");

    return 0;
}