#include <math.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    double cateto[2];
    double hipotenusa;
    int i;
    setlocale(LC_ALL, "");
    
    for(i=0; i<2; i++){
        printf("Digite o Cateto %d: ", i+1);
        scanf("%lf", &cateto[i]);
    }
    
    hipotenusa = sqrt(pow(cateto[0], 2) + pow(cateto[1], 2));
    
    printf("A hipotenusa é: %.2lf\n", hipotenusa);

    return 0;
}
