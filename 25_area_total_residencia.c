
#include <stdio.h>

int main()
{
    double largura, comprimento, area, areatotal = 0;
    int contador = 1;
    int continuar;
    
    do{
        printf("\nComodo %d\n", contador);
        
        printf("Digite a largura do comodo %d: ", contador);
        scanf("%lf", &largura);
        
        printf("Digite o comprimento do comodo %d: ", contador);
        scanf("%lf", &comprimento);
        
        area = largura * comprimento;
        areatotal += area;
        
        do{
        printf("Deseja continuar adicionando mais comodos(1-SIM/2-NÃO)?");
        scanf("%d", &continuar);
        } while(continuar < 1 || continuar > 2);
        
        contador++;
    } while(continuar == 1);
    
    printf("A area total da casa foi de: %.2lf", areatotal);

    return 0;
}