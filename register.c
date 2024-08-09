#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Alondra Osorio Crespo

/**
* -Programa que ejecuta un ciclo for con un numero de iteraciones
* -El valor maximo se pasa como parametro en la linea de comando 
* -Ejemplo: ./registerEXE 10000000000
*        es decir 1 x 10^10 en uno seguido de 10 ceros
* -argv[0] es el nombre del programa
* -argv[1] es el numero de iteraciones
*/
int main(int argc,char* argv[]){
      if(argc!=2){
	printf("Forma de uso: %s ValorLong \n",argv[0]);
	return -1;
      }
 	long max= atol(argv[1]); 

     //Calcula el tiempo de ejecucion
     clock_t t= clock();
     printf("Inicio\n");

     //la variable n no la almacene en la memoria principal (RAM)
     //que preocure asignarlo a un registro del procesador
     register int n=0;

     //int n=0;
     for(n=0;n<max;n++);

     printf("Fin\n");
     t=clock()-t;

     // calcula el tiempo transcurrido
     double tiempo= ((double)t)/CLOCKS_PER_SEC;
	printf("Tiempo transcurrido %f segundos\n",tiempo);
     return 0;
}
