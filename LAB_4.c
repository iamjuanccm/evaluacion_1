#include <stdio.h>
#include <stdlib.h>
/*
LABORATORIO 4 en C
Author: Juan Carlos Corona Márquez
Date: 9 de marzo 2023
Description: Laboratorio 4 en C con código que realiza una 
suma, resta, multiplicación o división bajo ciertas condiciones y 
según la opción seleccionada en un menú

-------PREGUNTAS--------

1. ¿Qué es lo que hace el código antes de modificarlo?
Básicamente, muestra un menú al usuario para que seleccione una opción y 
posteriormente imprimir algo conforme esa opción, además de volver a mostrar
el menú luego de limpiar la entrada para volver a seleccionar una y otra vez
hasta que se selecciona una opción inválida.

2. ¿Para qué sirve la función fflush?
Vacía la zona de entrada (o búfer) antes de leer lo siguiente que se ingrese
para evitar que se lea algún caracter sobrante o ajeno.

3. ¿Cuál es la sintaxis de un while?
    while (condición) {
        código a ejecutar
    }

4. ¿Cuál es la sintaxis de un switch?
    switch(opción) {
        case x:
            Bloque de código para el caso x
        break;
        case y:
            Bloque de código para el caso y
        break;
        default:
            Bloque de código por default
    }

*/



int printMenu(){
    /* printMenu
    Author: Juan Carlos Corona Márquez
    Date: 9 de marzo 2023
    Description: Programa en C que realiza una 
    suma, resta, multiplicación o división bajo 
    ciertas condiciones y según la opción seleccionada en un menú
    Param: [option] --- [entero] 
    */
    int option;
    printf("Bienvenido al menú seleccione una opción \n\n");
    printf("\t1)SUMA DE DOS NÚMEROS PARES\n"); 
    printf("\t2)RESTA DE DOS NÚMEROS MÚLTIPLOS DE 5\n"); 
    printf("\t3)DIVISIÓN DE DOS NÚMEROS EXACTA (SIN RESIDUO)\n");
    printf("\t4)MULTIPLICACIÓN DE DOS NÚMEROS MAYORES A 10\n");
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}

void suma(){
    int n1, n2, suma;
    printf("*** OPCIÓN SUMA DE DOS NÚMEROS PARES ***\n");
    printf("TECLEA los dos números pares (dejando un espacio entre ellos):\n");
    scanf("%d %d", &n1, &n2);

    if (n1 % 2 == 0 && n2 % 2 == 0) {
        suma = n1 + n2;
        printf("%d + %d es igual a %d\n", n1, n2, suma);
    } else {
        printf("ERROR, los números deben ser ambos pares.\n");
    }
}


void resta() {
    int nres1, nres2, resta;
    printf("*** OPCIÓN RESTA DE DOS NÚMEROS MÚLTIPLOS DE 5 ***\n");
    printf("TECLEA los dos números múltiplos de 5 (dejando un espacio entre ellos):\n");
    scanf("%d %d", &nres1, &nres2);
    if (nres1 % 5 == 0 && nres2 % 5 == 0) {
    resta = nres1 - nres2;
        printf("%d - %d es igual a %d\n", nres1, nres2, resta);
    }
    else {
        printf("ERROR, los números deben ser ambos múltiplos de 5.\n");
    }
}

void division(){
    int ndiv1, ndiv2, division;
    printf("*** OPCIÓN DIVISIÓN DE DOS NÚMEROS EXACTA (SIN RESIDUO) ***\n");
    printf("TECLEA los dos números a dividir (dejando un espacio entre ellos):\n");
    scanf("%d %d", &ndiv1, &ndiv2);
    if (ndiv1 %  ndiv2 == 0) {
    division = ndiv1 / ndiv2;
        printf("%d / %d es igual a %d\n", ndiv1, ndiv2, division);
    }
    else {
        printf("ERROR, la división no es exacta.\n");
    }
}

void multip(){
    int nmult1, nmult2, multiplicacion;
    printf("*** OPCIÓN MULTIPLICACIÓN DE DOS NÚMEROS MAYORES A 10 ***\n");
    printf("TECLEA los dos números mayores a 10 (dejando un espacio entre ellos):\n");
    scanf("%d %d", &nmult1, &nmult2);
    if (nmult1 > 10 && nmult2 > 10) {
    multiplicacion = nmult1 * nmult2;
        printf("%d x %d es igual a %d\n", nmult1, nmult2, multiplicacion);
    }
    else {
        printf("ERROR, los números deben ser ambos mayores a 10.\n");
    }
}

int main() {
    int flag = 0;
    int confirm = 1;
    while (flag != 5) {
        if (confirm == 1) {
            system("clear");
            flag = printMenu();
        }
        
        switch (flag) {
            case 1:
                system("clear");
                suma();
                break;

            case 2:
                system("clear");
                resta();
                break;

            case 3:
                system("clear");
                division();
                break;

            case 4:
                system("clear");
                multip();
                break;

            default:
                printf("\nOPCIÓN NO VÁLIDA\n");
                break;
        }
        printf("\n¿QUIERE VOLVER AL MENÚ PRINCIPAL? (TECLEA EL NÚMERO 1 PARA SÍ Y EL 0 PARA NO): ");
        scanf("%d", &confirm);
        if(confirm == 0){
            system("clear");
            exit (-1);
        }
        printf("\n");
    }
}
