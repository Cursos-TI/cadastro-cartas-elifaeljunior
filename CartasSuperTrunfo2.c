#include <stdio.h>

int main() {

    

    char pais1[30] = "Brasil";
    char pais2[30] = "Argentina";

    int pop1 = 214000000;
    int pop2 = 46000000;

    float area1 = 8515767.0;
    float area2 = 2780400.0;

    float pib1 = 1920.0;   
    float pib2 = 640.0;

    int pontos1 = 20;
    int pontos2 = 12;

    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;

    int atr1, atr2;
    float soma1 = 0, soma2 = 0;

   

    printf("=== SUPER TRUNFO - DESAFIO FINAL ===\n\n");
    printf("País 1: %s\n", pais1);
    printf("País 2: %s\n\n", pais2);

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atr1);

    

    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atr1 != 1) printf("1 - População\n");
    if (atr1 != 2) printf("2 - Área\n");
    if (atr1 != 3) printf("3 - PIB\n");
    if (atr1 != 4) printf("4 - Pontos Turísticos\n");
    if (atr1 != 5) printf("5 - Densidade Demográfica\n");

    printf("Opção: ");
    scanf("%d", &atr2);

    

    if (atr1 == atr2 || atr1 < 1 || atr1 > 5 || atr2 < 1 || atr2 > 5) {
        printf("\nErro: atributos inválidos ou repetidos.\n");
        return 0;
    }

    printf("\n--- Comparação ---\n\n");

    

    switch (atr1) {
        case 1:
            printf("Atributo 1: População\n");
            printf("%s: %d\n", pais1, pop1);
            printf("%s: %d\n\n", pais2, pop2);
            soma1 += pop1;
            soma2 += pop2;
            break;

        case 2:
            printf("Atributo 1: Área\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n\n", pais2, area2);
            soma1 += area1;
            soma2 += area2;
            break;

        case 3:
            printf("Atributo 1: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n\n", pais2, pib2);
            soma1 += pib1;
            soma2 += pib2;
            break;

        case 4:
            printf("Atributo 1: Pontos Turísticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n\n", pais2, pontos2);
            soma1 += pontos1;
            soma2 += pontos2;
            break;

        case 5:
            printf("Atributo 1: Densidade Demográfica\n");
            printf("%s: %.4f\n", pais1, dens1);
            printf("%s: %.4f\n\n", pais2, dens2);
            soma1 += (1 / dens1);
            soma2 += (1 / dens2);
            break;
    }

    

    switch (atr2) {
        case 1:
            printf("Atributo 2: População\n");
            printf("%s: %d\n", pais1, pop1);
            printf("%s: %d\n\n", pais2, pop2);
            soma1 += pop1;
            soma2 += pop2;
            break;

        case 2:
            printf("Atributo 2: Área\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n\n", pais2, area2);
            soma1 += area1;
            soma2 += area2;
            break;

        case 3:
            printf("Atributo 2: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n\n", pais2, pib2);
            soma1 += pib1;
            soma2 += pib2;
            break;

        case 4:
            printf("Atributo 2: Pontos Turísticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n\n", pais2, pontos2);
            soma1 += pontos1;
            soma2 += pontos2;
            break;

        case 5:
            printf("Atributo 2: Densidade Demográfica\n");
            printf("%s: %.4f\n", pais1, dens1);
            printf("%s: %.4f\n\n", pais2, dens2);
            soma1 += (1 / dens1);
            soma2 += (1 / dens2);
            break;
    }

    

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n\n", pais2, soma2);

    printf("Resultado final: ");
    soma1 > soma2 ? printf("%s venceu!\n", pais1) :
    soma2 > soma1 ? printf("%s venceu!\n", pais2) :
                    printf("Empate!\n");

    return 0;
}