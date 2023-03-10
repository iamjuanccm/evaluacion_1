#include <stdio.h>
/*
Documentación
    Author: Juan Carlos Corona Márquez
    Date: 5/marzo/2023
    Description: Programa que imprime las tablas de multiplicar del 1 al 10
    mediante un ciclo FOR anidado 
*/


int main() {
    int num, mult;
    printf("*** TABLAS DE MULTIPLICAR DEL 1 AL 10 *** \n");
    for (num = 1; num <= 10; num++) {
        printf("ESTA ES LA TABLA DE MULTIPLICAR DEL %d:\n", num);
        for (mult = 1; mult <= 10; mult++) {
            printf("%d x %d = ", num, mult);
            printf("%d\n", num*mult);
        }
        printf("\n");
    }
    
    return 0;
}
