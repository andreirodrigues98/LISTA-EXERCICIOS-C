
#include <stdio.h>
#include <locale.h>

int main()
{
    int numero[2];
    int quociente, i;
    setlocale(LC_ALL, "");
    
       for(i=0; i<2; i++){
           printf("Digite o numero %d:", i+1);
           scanf("%d", &numero[i]);
       }
       
       quociente = numero[0]/numero[1]; 
       
       printf("O quociente da divisão dos numeros é: %d", quociente);
       
       return 0;
}
