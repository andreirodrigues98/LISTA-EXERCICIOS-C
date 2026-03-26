
#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero quadrado perfeito(0 para finalizar): ");
    scanf("%d", &num);
    
    while(num != 0){
        int soma = 0;
        int impar = 1;
        int termos = 0;
        
        while(soma < num){
            soma +=impar;
            termos++;
            impar+=2;
        }
        
        printf("A raiz quadrada de %d é: %d\n", num,termos);
        
        printf("Digite um numero quadrado perfeito(0 para finalizar): ");
        scanf("%d", &num);
    }
    return 0;
}
