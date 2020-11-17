 //Faça um programa que apresente os números primos menores que 100.

 #include <stdio.h>

int i,j,CR,resto;
int main (){

     for (i=1;i<=100;i++){
        CR = 0;
        for (j=1;j<=i;j++){
            resto = i%j;
            if (resto == 0){
                CR = CR+1;
             }
         }
        if (CR == 2) {
            printf (" %d\n",i);
        }
     }
 }
