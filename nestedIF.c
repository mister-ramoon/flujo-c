#include <stdio.h>
int opt1 = 0;
int opt2 = 0;

int main() {
    //Este programa genera menus según lo que el usuario elija
    if (opt1 == 0) {
        printf("Usted eligió la opción 0, vera nuestro menu de bebidas, elija una:\n");
        printf("0. Platzi Cola cero\n");
        printf("1. Platzi Cola normal\n");
        printf("2. Platzi Cola light\n");
        if (opt2 == 0)
            printf("Usted eligio una Platzi Cola cero\n");
        else if (opt2 == 1)
            printf("Usted eligio una Platzi Cola normal\n");
        else if (opt2 == 2)
            printf("Usted eligio una Platzi Cola light\n");
        else
            printf("Opción no valida\n");
    }
    else if (opt1) {
        // Aquí va el menu de cómidas
        printf("Usted eligió la opción 1, vera nuestro menu de comidas, elija una:\n");
        printf("0. Platzi Pizza\n");
        printf("1. Platzi Hamburguesa\n");
        printf("2. Platzi Hot Dog\n");

        if (opt2 == 0)
            printf("Usted eligio una Platzi Pizza\n");
        else if (opt2 == 1)
            printf("Usted eligio una Platzi Hamburguesa\n");
        else if (opt2 == 2)
            printf("Usted eligio una Platzi Hot Dog\n");
        else
            printf("Opción no valida\n");
    }
    else
        printf("Opción no valida\n");


    return 0;
}