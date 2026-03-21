
#include <stdio.h>
#include <locale.h>

int main()
{
    int numero, i;
    int positivo = 0;
    setlocale(LC_ALL, "");
    
    for(i=0; i<5; i++){
        printf("Digite o numero %d:", i+1);
        scanf("%d", &numero);
        
        if(numero>0){
        positivo++;
    }
    }
    
    printf("A quantidade de números positivos é: %d", positivo);

    return 0;
}
