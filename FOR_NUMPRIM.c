#include <stdio.h>
/*
Documentación
    Author: Juan Carlos Corona Márquez
    Date: 5/marzo/2023
    Description: Programa que imprime los números primos
    del 1 al 50 mediante el uso de un ciclo FOR y un IF
*/

int main() {
    int num;
    int ant;
    printf("ESTOS SON LOS NÚMEROS PRIMOS DEL 1 AL 50: \n");
    for(num = 2; num <= 50; num++) {
    if((num == 2) || (num == 3) || (num == 5) || (num ==7) || (num ==11) || (num == 13) || (num == 17) || (num == 19) || (num == 23) || (num == 29) || (num == 31) || (num == 37) || (num == 41) || (num == 43) || (num == 47)){
    printf("%d ", num); 
    }
    }
    return 0;
}
