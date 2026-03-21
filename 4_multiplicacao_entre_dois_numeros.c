
#include <stdio.h>

int main()
{
    int numero[2];
    int mult, i;
    
       for(i=0; i<2; i++){
           printf("Digite o numero %d:", i+1);
           scanf("%d", &numero[i]);
       }
       
       mult = numero[0] * numero[1]; 
       
       printf("A multiplicação dos numeros e: %d", mult);
       
       return 0;
}
