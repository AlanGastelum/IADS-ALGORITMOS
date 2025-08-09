// Calculadora Al Reves //
#include <stdio.h>
int main(void)
{
    int NUMERO, RESIDUO, INVERSO = 0;
    printf ("=== Calculadora Al Reves ===\n\n");
    printf ("Ingresa un numero para mostrarlo inverso:");
    scanf ("%d", &NUMERO);
    RESIDUO = NUMERO;
    while (RESIDUO > 0) {
      INVERSO = INVERSO * 10 + RESIDUO % 10;
      RESIDUO = (RESIDUO - RESIDUO % 10) / 10;
    }
    printf ("\nEl valor del numero inverso es: %d\n", INVERSO);
    return 0;
}