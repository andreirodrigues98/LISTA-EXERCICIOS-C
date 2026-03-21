
#include <stdio.h>

int main()
{
    int numero, i, resultado;
    int op=1;
    
   while(op == 1){
        printf("Digite um número para gerar sua tabuada: ");
        scanf("%d", &numero);
        printf("A tabuda do numero %d:\n", numero);
    
        for(i=0; i<=10; i++){
            resultado = numero * i;
            printf("%d * %d = %d\n", numero, i, resultado);
        }
        
        do{
        printf("\nDeseja Continuar(1-SIM/2-NÃO)? ");
        scanf("%d", &op);
        } while(op>2 || op<1);
   }
   
    printf("Encerrado.\n");
    
    return 0;
}
