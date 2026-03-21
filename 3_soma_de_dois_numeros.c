
#include <stdio.h>

int main()
{
    int numero[2];
    int soma, i;
    
       for(i=0; i<2; i++){
           printf("Digite o numero %d:", i+1);
           scanf("%d", &numero[i]);
       }
       
       soma = numero[0] + numero[1]; 
       
       printf("A soma dos numeros e: %d", soma);
       
       return 0;
}
