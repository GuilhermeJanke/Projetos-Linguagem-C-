#include <stdio.h>

// Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).
int main()
{
	int aux,n,i;
	aux = 0;
	scanf ("%d",&n);
	aux = n;
	while (i < 9){
		scanf ("%d",&n);    
    	if (n > aux){
			aux = n;	
				}
		i = i+1;	
		}
	printf ("%d",aux);	
}
