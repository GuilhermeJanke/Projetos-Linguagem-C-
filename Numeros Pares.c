
//Fa�a um programa que apresente os n�meros de pares de 0 a 20, cada n�mero em uma linha.

#include <stdio.h>
int main()
{
    int i; 
    for (i=0;i<=20;i++){
    	if (i % 2 == 0){
    		printf("%d\n",i);
		}
	}
}


