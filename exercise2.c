#include <stdio.h> 

/*
Pasos para hacer la conversion:
1. Solicitar al usuario la temperaratura en celsius.
2. Se mostrara las conversiones correspondientes (Fahrenheit y Kelvin)
    2.1 C a F: (9*C/5) + 32
    2.2 C a K: C+273.15
*/

int main() {
    int temperature;

    printf("Enter the temperature (C): ");
    scanf("%d", &temperature);
    printf("Temperature in C: %d\n", temperature);

    printf("Temperature in f: %.2f\n", (9*(float)temperature/5)+32);
    printf("Temprerature in K: %.2f\n", (float)temperature+273.15);
    
    return 0;
}