#include <stdio.h>

/*
Descripcion del programa:
Escribe un programa en C que actúe como una calculadora básica. El programa debe solicitar 
al usuario dos números y una operación (suma, resta, multiplicación o división), realizar 
la operación y mostrar el resultado.

Que datos necesitamos del usuario?
Primer numero: del 0 al 9
Segundo numero: del 0 al 9
Operacion: suma(S)
Opercaion: resta(R)
Operacion: multiplicacion(M)
Operacion: division(D)
*/

int main() {
    // Starts program
    int number1;
    int number2;
    char operation;

    printf("Enter the operation: ");
    scanf("%c", &operation);
    fflush(stdout);

    printf("Enter the first number: ");
    scanf("%d", &number1);
    fflush(stdout);

    printf("Enter the second number: ");
    scanf("%d", &number2);
    fflush(stdout);

    
    printf("You entered: %d\n", number1);
    printf("You entered: %d\n", number2);
    printf("Operation: %c\n", operation);

    if(operation == 's') {
        // Ejecutar la operacion de suma 
        printf("La suma es: %d\n", number1+number2);
    }
    else if(operation == 'r') {
        // Ejecutar la operacion de resta 
        printf("La resta es: %d\n", number1-number2);
    }
    else if(operation == 'm') {
        // Ejecutar la operacion de multiplicacion
        printf("La multiplicacion es: %d\n", number1*number2);
    }
    else if(operation == 'd') {
        // Ejecutar la operacion de division
        printf("La division es: %f\n", (float)number1/number2);
    }
    else {
        printf("La operacion no se reconoce \n");
        
    }


    return 0; // End program
}