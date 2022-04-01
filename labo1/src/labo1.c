/*
 ============================================================================
 Name        : Ian Sibikousky
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
setbuf(stdout,NULL);
int numero =1;
float p=3.14;
char letra= 'a';
int numeroingresado;

printf ("el numero entero es: %d, el numero pi es: %.2f y la letra es: %c",numero,p,letra);


printf("ingrese un numero");
scanf("%d", &numeroingresado);
printf("%d",numeroingresado);
return EXIT_SUCCESS;
}
