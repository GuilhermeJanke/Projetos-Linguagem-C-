//um programa que apresente os números de 1 a 10, sendo que cada número deve ser
//impresso em uma linha e os números ímpares deslocados (\t) a direita.

#include <stdio.h>

int valor,i;
int main(void) {
 valor = 0;
 for (i=1;i<=10;i++){
     valor = valor + 1;
     if (valor % 2 == 1 ){
         printf("\n \t %d",valor);
     }
     if (valor % 2 == 0 ){
         printf("\n %d",valor);
     }
 }
 return 0;
}
