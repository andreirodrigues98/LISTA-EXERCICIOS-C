#include <stdio.h>

int main()
{
    double soma = 0.0;
    int i;
    
    for(i=1; i<=50; i++){
        double num = 51 - i;
        double den = i;
        soma += num/den;
        
        printf("%1.lf/%1.lf" ,num, den);
        
        if(num >1 && den<50){
            printf(" + ");
        }
    }
    
    printf("\nO valor de S = %.2lf", soma);

    return 0;
}
