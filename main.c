#include <stdio.h>
/*
Documentación
    Author: Juan Carlos Corona Márquez
    Date: 22/febrero/2023
    Description: Cuestionario de compatibilidad para app de citas
    Param: [elección] / [números enteros del 1 al 10]
*/


/*
-Declaración de las variables a usar (1 para el cálculo 
del total y 10 para las preguntas, 1 para cada una)
-Todas son del tipo INT (Enteros)
*/

int totalObt;
int preg1,preg2,preg3,preg4,preg5,preg6,preg7,preg8,preg9,preg10;

/*
- Cada pregunta solicita un entero para responder según el caso
- El entero ingresado se le asigna a la variable designada para esa pregunta 
*/
int main(){
    printf("TEST DE COMPATIBILIDAD DE TU POSIBLE CITA \n");
    printf("PARA RESPONDER CADA PREGUNTA DEBERÁS TECLEAR EL VALOR NUMÉRICO INDICADO Y PRESIONAR LA TECLA ENTER POSTERIORMENTE \n ");
    printf("1. DEL 1 AL 10, ¿QUÉ PUNTAJE LE DAS EN GENERAL? \n ");
    scanf("%i", &preg1);
    printf("2. ¿TIENEN AL MENOS UN GUSTO CINEMATOGRÁFICO EN COMÚN? 10 ES PARA SI Y 0 PARA NO \n ");
    scanf("%i", &preg2);
    printf("3. ¿TIENEN AL MENOS UN GUSTO CULINARIO EN COMÚN? 10 ES PARA SI Y 0 PARA NO \n ");
    scanf("%i", &preg3);
    printf("4. ¿TIENEN ALGUNA AFICIÓN DEPORTIVA EN COMÚN? 10 ES PARA SI Y 0 PARA NO \n ");
    scanf("%i", &preg4);
    printf("5. ¿TIENEN ALGÚN PASATIEMPO EN COMÚN? 10 ES PARA SI Y 0 PARA NO \n ");
    scanf("%i", &preg5);
    printf("6. ¿CREES QUE TE SENTIRÍAS CÓMODO/A PASANDO MUCHO TIEMPO CON ÉL/ELLA? 10 ES PARA SI Y 0 PARA NO \n ");
    scanf("%i", &preg6);
    printf("7. ¿SIENTES QUE HAY ALGO DE ÉL/ELLA QUE PODRÍA MOLESTARTE? EN ESTE CASO 10 ES PARA NO Y 0 PARA SI \n ");
    scanf("%i", &preg7);
    printf("8. ¿SIENTES INTERÉS POR CONOCERLO/A MÁS A FONDO REALMENTE? 10 ES PARA SI Y 0 PARA NO \n ");
    scanf("%i", &preg8);
    printf("9. DEL 1 AL 10, ¿QUÉ TANTO CONSIDERAS QUE SU PERSONALIDAD Y LA TUYA SERÍAN COMPATIBLES? \n ");
    scanf("%i", &preg9);
    printf("10. CONSIDERANDO LA REGIÓN DONDE VIVEN, DEL 1 AL 10 ¿QUÉ TAN VIABLE CREES QUE SERÍA QUE SE VEAN EN PERSONA REGULARMENTE? \n ");
    scanf("%i", &preg10);

/*
- A la variable designada para el total se le asigna el valor resultante de sumar los valores ingresados
-Se imprime el total de puntos (valor de la variable) y se indica el porcentaje correspondiente
*/
    totalObt = preg1 + preg2 + preg3 + preg4 + preg5 + preg6 + preg7 + preg8 + preg9 + preg10;
    printf("TU TOTAL OBTENIDO SON:%i", totalObt);
    printf(" PUNTOS DE 100 PUNTOS POSIBLES\n");
    printf("SEGÚN EL TEST, SU PORCENTAJE DE COMPATIBILIDAD ES DEL:%i", totalObt);
    printf("%\n");

/*
-Uso de un if simple donde la condición es que el valor de 
la variable del total sea mayor a 70 
y según el caso se imprime el mensaje

*/
if (totalObt > 70){
    printf("DADO QUE SU RESULTADO DE COMPATIBILIDAD SUPERA EL 70%, CREEMOS QUE QUIZÁS DEBERÍAN DARSE UNA OPORTUNIDAD \n");
}
else{
    printf("DADO QUE SU RESULTADO DE COMPATIBILIDAD ES MENOR AL 70%, SUGERIMOS LO PIENSES BIEN ANTES DE DAR UN PASO MAYOR");
}

}
