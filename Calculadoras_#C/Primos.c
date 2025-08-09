// Calculadora Primos //
#include <stdio.h>
#include <stdbool.h>
int main() 
{
    int NUMIN;
    printf ("=== Calculadora Primos ===\n\n");
    printf ("Ingresa un numero entero: ");
    scanf ("%d", &NUMIN);
    int DIVRESCERO;
    bool sino;
    if (NUMIN <= 1) {
        printf ("\nEl numero %d no es primo\n", NUMIN);
    } else {
        for (int INTERACCION = 2;
             INTERACCION <= NUMIN / 2;
             INTERACCION ++) {
             DIVRESCERO = NUMIN % INTERACCION;
            if (DIVRESCERO == 0) {
                sino = 0;
    } else {
                sino = 1;
            }
        }
        if (sino == 0) {
            printf ("\nEl numero %d no es primo\n", NUMIN);
        } else {
        printf ("\nEl numero %d es primo\n", NUMIN);
        }
    }   
}