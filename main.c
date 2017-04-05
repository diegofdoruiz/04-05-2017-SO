#include <stdio.h>
#include <stdlib.h>
#include "fibo.h"

int main(int argc, char ** argv) {
	if(argc!=2) {
     printf("debe ingresar parametros correctos, ej: ./main 5\n"); 
     exit(1);
   }
   const int numero = atoi(argv[1]); //Toma el número n
   
   printf("El fibo correspondiente al numero %d es: %d\n", numero, fibo(numero));
}
