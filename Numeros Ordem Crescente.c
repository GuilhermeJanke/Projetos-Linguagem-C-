#include <stdio.h>
//Faça um programa que leia três números e os apresente em ordem crescente.
int main()
{
	int n1,n2,n3,aux,i;
	
	scanf ("%d",&n1);
	scanf ("%d",&n2);
	scanf ("%d",&n3);
	

	for (i=0;i<=3;i++){
	
		if (n2 < n1){
			aux=n1;
			n1=n2;
			n2=aux;
		}
		if (n3 < n2){
			aux=n2;
			n2=n3;
			n3=aux; 
		}
	}
	printf ("%d",n1);
	printf ("\n%d",n2);
	printf ("\n%d",n3);
}
