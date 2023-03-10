import os

'''
LABORATORIO 4 en Python
Author: Juan Carlos Corona Márquez
Date: 9 de marzo 2023
Description: Laboratorio 4 en Python con código que realiza una 
suma, resta, multiplicación o división bajo ciertas condiciones y 
según la opción seleccionada en un menú

-------PREGUNTAS--------
1. ¿Qué es lo que hace el código antes de modificarlo?
Básicamente, muestra un menú al usuario para que seleccione una opción y 
posteriormente imprimir algo conforme esa opción, además de volver a mostrar
el menú luego de limpiar la entrada para volver a seleccionar una y otra vez
hasta que se selecciona una opción inválida.

2. ¿Cuál es la sintaxis de un while?

while condición:
    código a ejecutar

3. ¿Qué es un elif?
Es una palabra clave para indicar "si las condiciones anteriores no fueron
ciertas, intente con esta condición".

4. ¿Qué función de se ejecuta al correr el script?
Técnicamente, se ejecuta FLAG, aunque como nuestro ciclo while establece
que la función flag = printMenu(), podríamos decir que es como si 
se ejecutara printMenu en realidad

'''

'''
printMenu()
LABORATORIO 4 en Python
Author: Juan Carlos Corona Márquez
Date: 9 de marzo 2023
Description: Laboratorio 4 en Python con código que realiza una 
suma, resta, multiplicación o división bajo ciertas condiciones y 
según la opción seleccionada en un menú
Param: [option] --- [entero]
'''

def printMenu():
    option = input("Bienvenido al menú seleccione una opción: \n\n"
                   "1) SUMA DE DOS NÚMEROS PARES\n"
                   "2) RESTA DE DOS NÚMEROS MÚLTIPLOS DE 5\n"
                   "3) DIVISIÓN DE DOS NÚMEROS EXACTA (SIN RESIDUO)\n"
                   "4) MULTIPLICACIÓN DE DOS NÚMEROS MAYORES A 10\n")
    return option

def suma():
    print("*** OPCIÓN SUMA DE DOS NÚMEROS PARES ***")
    n1, n2 = map(int, input("TECLEA los dos números pares (dejando un espacio entre ellos): \n").split())

    if n1 % 2 == 0 and n2 % 2 == 0:
        suma = n1 + n2
        print(f"{n1} + {n2} es igual a {suma}")
    else:
        print("ERROR, los números deben ser ambos pares.")

def resta():
    print("*** OPCIÓN RESTA DE DOS NÚMEROS MÚLTIPLOS DE 5 ***")
    nres1, nres2 = map(int, input("TECLEA los dos números múltiplos de 5 (dejando un espacio entre ellos): \n").split())
    if nres1 % 5 == 0 and nres2 % 5 == 0:
        resta = nres1 - nres2
        print(f"{nres1} - {nres2} es igual a {resta}")
    else:
        print("ERROR, los números deben ser ambos múltiplos de 5.")

def division():
    print("*** OPCIÓN DIVISIÓN DE DOS NÚMEROS EXACTA (SIN RESIDUO) ***")
    ndiv1, ndiv2 = map(int, input("TECLEA los dos números a dividir (dejando un espacio entre ellos): \n").split())
    if ndiv1 % ndiv2 == 0:
        division = ndiv1 / ndiv2
        print(f"{ndiv1} / {ndiv2} es igual a {division}")
    else:
        print("ERROR, la división no es exacta.")

def multip():
    print("*** OPCIÓN MULTIPLICACIÓN DE DOS NÚMEROS MAYORES A 10 ***")
    nmult1, nmult2 = map(int, input("TECLEA los dos números mayores a 10 (dejando un espacio entre ellos): \n").split())
    if nmult1 > 10 and nmult2 > 10:
        multiplicacion = nmult1 * nmult2
        print(f"{nmult1} x {nmult2} es igual a {multiplicacion}")
    else:
        print("ERROR, los números deben ser ambos mayores a 10.")


flag = 0
confirm = 1

while flag != 5:
    if confirm == 1:
        os.system('clear')
        flag = int(printMenu())

    if flag == 1:
        os.system('clear')
        suma()
        confirm = int(input("\n¿QUIERE VOLVER AL MENÚ PRINCIPAL? (TECLEA EL NÚMERO 1 PARA SÍ Y EL 0 PARA NO): "))
        if confirm == 0:
            os.system('clear')
            import sys
            sys.exit()


    elif flag == 2:
        os.system('clear')
        resta()
        confirm = int(input("\n¿QUIERE VOLVER AL MENÚ PRINCIPAL? (TECLEA EL NÚMERO 1 PARA SÍ Y EL 0 PARA NO): "))
        if confirm == 0:
            os.system('clear')
            import sys
            sys.exit()
    
    elif flag == 3:
        os.system('clear')
        division()
        confirm = int(input("\n¿QUIERE VOLVER AL MENÚ PRINCIPAL? (TECLEA EL NÚMERO 1 PARA SÍ Y EL 0 PARA NO): "))
        if confirm == 0:
            os.system('clear')
            import sys
            sys.exit()

    elif flag == 4:
        os.system('clear')
        multip()
        confirm = int(input("\n¿QUIERE VOLVER AL MENÚ PRINCIPAL? (TECLEA EL NÚMERO 1 PARA SÍ Y EL 0 PARA NO): "))
        if confirm == 0:
            os.system('clear')
            import sys
            sys.exit()

    else:
        print("\nOPCIÓN NO VÁLIDA\n")
