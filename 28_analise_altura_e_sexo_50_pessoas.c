#include <stdio.h>

int main() {
    float altura;
    int sexo;

    float soma_total = 0;
    float soma_mulheres = 0;

    int cont_homens = 0;
    int cont_mulheres = 0;
    int cont_mulheres_baixas = 0;

    for (int i = 0; i < 50; i++) {
        printf("Digite a altura: ");
        scanf("%f", &altura);

        printf("Digite o sexo (0=masc, 1=fem): ");
        scanf("%d", &sexo);

        soma_total += altura;

        if (sexo == 1) {
            soma_mulheres += altura;
            cont_mulheres++;

            if (altura < 1.65) {
                cont_mulheres_baixas++;
            }
        } else {
            cont_homens++;
        }
    }

    float media_mulheres = soma_mulheres / cont_mulheres;
    float media_total = soma_total / 50;

    float perc_homens = (cont_homens / 50.0) * 100;
    float perc_mulheres_baixas = (cont_mulheres_baixas / (float)cont_mulheres) * 100;

    printf("\nMedia altura mulheres: %.2f\n", media_mulheres);
    printf("Media altura populacao: %.2f\n", media_total);
    printf("Percentual de homens: %.2f%%\n", perc_homens);
    printf("Quantidade de mulheres: %d\n", cont_mulheres);
    printf("Percentual mulheres abaixo de 1.65: %.2f%%\n", perc_mulheres_baixas);

    return 0;
}
