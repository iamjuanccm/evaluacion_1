#include <stdio.h>
/*
Documentación
    Author: Juan Carlos Corona Márquez
    Date: 5/marzo/2023
    Description: Programa que imprime un arbolito de 
    navidad mediante el uso de ciclos FOR anidados 
*/

int main() {
    int ast, fi, esp;
    printf("*** FELIZ NAVIDAD !!! ***\n");
    for (fi = 1; fi <= 5; fi++) {
        for (esp = 1; esp <= 5 - fi; esp++) {
            printf(" ");
        }
        for (ast = 1; ast <= 2 * fi - 1; ast++) {
            printf("*");
        }
        printf("\n");
    }

    printf("    ");
    printf("|\n");
    printf("    ");
    printf("|");
    return 0;
}
