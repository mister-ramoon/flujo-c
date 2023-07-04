#include <stdio.h>
int n = 10;

int main() {

    if(n > 10 && n < 20)
        printf("El número es mayor a diez, pero menor que 20\n");
    else if(n < 10 && n >= 0)
        printf("El número es menor a diez\n");
    else if (n == 10)
        printf("El número es igual a diez\n");
    else if (n != 10)
        printf("El número es diferente a diez\n");
    else if (n > 20)
        printf("El número es mayor a veinte\n");
    else
        printf("Error no puedes usar números negativos.\n");

    printf("Hello Student\n");
    return 0;
}