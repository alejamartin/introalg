#include <stdio.h> 

/*
Pasos para determinar si un numero ENTERO es par o impar:
1. Solicitar al usuario un numero entero.
2. Determinar si el número es par o impar.

*/
int main() {
    int numero;
    int modulador;

    printf("Ingresa un numero entero: ");
    scanf("%d", &numero); 
    printf("Ingresa el modulador: ");
    scanf("%d", &modulador);
    printf("El modulo de %d es %d\n", numero, numero % modulador);
    

    if (numero % modulador == 0) {
        printf("El numero %d es multiplo de %d.\n", numero, modulador);

    } else {
        printf("El numero %d no es multiplo de %d.\n", numero, modulador );
    }
    
    return 0;
}