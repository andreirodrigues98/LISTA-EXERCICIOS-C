#include <stdio.h>

int main()
{
   int numero, i;
   
   for(i=1; i<=5; i++){
       printf("Digite um numero: ");
       scanf("%d", &numero);
       
       printf("O numero digitado foi: %d\n", numero);
       
   }
}



