#include <stdio.h>

// Fa�a um programa que leia 10 n�meros inteiros e apresente o maior (n�o utilize vetor/matriz).
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
