
#include <stdio.h>
#include <locale.h>

int main()
{
    char nome[3][50];
    int idade[3];
    int i;
    float media;
    int soma = 0;
    setlocale(LC_ALL, "");
    
    for(i=0; i<3; i++){
        printf("Digite seu nome: ");
        scanf("%s", &nome[i]);
    }
    
    for(i=0; i<3; i++){
        printf("Digite sua idade, %s: ",nome[i]);
        scanf("%d", &idade[i]);
    }
    
    for(i=0; i<3; i++){
        printf("A idade de %s é : %d\n", nome[i], idade[i]);
        
        soma +=idade[i];
    }
    
    media = soma/3.0;
    
    printf("\nA media das idades deles são: %.2f", media);
    
    
    

    return 0;
}
