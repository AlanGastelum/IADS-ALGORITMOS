// Calculadora Par/Impar //
#include <stdio.h>
int main() 
{
    int NRO;
    int NUM = 0;
    do {
       NUM = NUM + 1;
       printf("Ingresa un numero;");
       scanf("%d", &NRO);
         if (NRO % 2 == 0) {
          printf("El numero %d es par\n", NRO);
         } else {
          printf("El numero %d no es par\n", NRO);
         }
       printf("\n"); 
       } while (NUM < 10);
       printf("******* Termino el ciclo *******\n");
       return 0; 
}