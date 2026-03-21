
#include <stdio.h>
#include <locale.h>

int main()
{
    int numero[2];
    int resto, i;
    setlocale(LC_ALL, "");
    
       for(i=0; i<2; i++){
           printf("Digite o numero %d:", i+1);
           scanf("%d", &numero[i]);
       }
       
       resto = numero[0] % numero[1]; 
       
       printf("O resto da divisão dos numeros é: %d", resto);
       
       return 0;
}
