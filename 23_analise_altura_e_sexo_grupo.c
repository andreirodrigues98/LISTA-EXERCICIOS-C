
#include <stdio.h>

int main()
{
    float altura, menor, maior, media, percentual;
    int sexo, sexo_maior, sexo_menor;
    
    
    int homens = 0;
    int mulheres = 0;
    int mulheres_abaixo = 0;
    float soma_mulheres = 0;
    
    
    
    printf("Digite a altura ex: 1.65 (<=0 para encerrar): ");
    scanf("%f", &altura);
    
    if(altura > 0){
        maior = altura;
        menor = altura;
    }
    
    while(altura > 0) {
        

        do{
        printf("Digite o sexo (1-masculino, 2-feminino): ");
        scanf("%d", &sexo);
        } while(sexo<1 || sexo>2);

        if(altura > maior) {
            maior = altura;
            sexo_maior = sexo;
        }
        
        if(altura < menor) {
            menor = altura;
            sexo_menor = sexo;
        } 

        if(sexo == 1) {
            homens++;
        }
        
        if(sexo == 2) {
            mulheres++;
            soma_mulheres += altura;

            if(altura < 1.68) {
                mulheres_abaixo++;
            }
        }

        printf("\nDigite a altura ex: 1.65 (<=0 para encerrar): ");
        scanf("%f", &altura);
    }
    
    
    printf("\nMaior altura: %.2f - ", maior);
    if(sexo_maior == 1) {
        printf("de um homem\n");
    } else {
        printf("de uma mulher\n");
    }

    printf("Menor altura: %.2f - ", menor);
    if(sexo_menor == 1) {
        printf("de um homem\n");
    } else {
        printf("de uma mulher\n");
    }

    printf("Numero de homens: %d\n", homens);
    
    if(mulheres > 0) {
        media = soma_mulheres / mulheres;
        percentual = (mulheres_abaixo * 100.0) / mulheres;

        printf("Media das mulheres: %.2f\n", media);
        printf("Percentual de mulheres abaixo de 1.68: %.2f%%\n", percentual);
    }

    return 0;
}
