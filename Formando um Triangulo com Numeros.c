//Faça um programa que apresente os números de 1 a 15 na forma de um triangulo, como
//apresentado a seguir:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// usando apenas 1 laço de repetição

#include <stdio.h>

int main (){

int valor,aux1,aux2,i;

 valor = 0;
 aux1=1;
 aux2=1;
 for (i=1;i<=15;i++){

    valor = valor+1;
    printf("%d ",valor);

    if ( aux1 == aux2 ){

        printf("\n");
        aux1 = 0;
        aux2 = aux2+1;
    }
    aux1=aux1+1;
 }
}
