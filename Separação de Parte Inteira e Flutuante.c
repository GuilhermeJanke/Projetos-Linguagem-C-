#include <stdio.h>


//Fa�a um programa que leia um n�mero de ponto flutuante e apresente em linhas separadas a parte inteira e a parte fracion�ria.

main()
{  	
float num;

   	scanf("%f", &num);
   	printf("%d\n",(int) num);
   	printf("%f", num - ((int)num));
}
