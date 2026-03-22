
#include <stdio.h>

void imprimeEmSequencia(int n){
    int i, j;
    
    for(i =1; i<=n; i++){
        
        for(j=1; j<=i; j++){
            
            printf(" %d ", i);
        }
      
      printf("\n");
    }
}


int main()
{
    int numero;
    
    printf("Digite um numero:");
    scanf("%d", &numero);
    
    imprimeEmSequencia(numero);

    return 0;
}
