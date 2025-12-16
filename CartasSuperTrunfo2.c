#include <stdio.h>

int main() {

    /* ===== Cartas pré-definidas ===== */

    char pais1[30] = "Brasil";
    char pais2[30] = "Argentina";

    int pop1 = 214000000;
    int pop2 = 46000000;

    float area1 = 8515767.0;
    float area2 = 2780400.0;

    float pib1 = 1920.0;   // em bilhões
    float pib2 = 640.0;

    int pontos1 = 20;
    int pontos2 = 12;

    /* ===== Cálculos ===== */

    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;

    int opcao;

    /* ===== Menu ===== */

    printf("=== SUPER TRUNFO - COMPARAÇÃO DE PAÍSES ===\n\n");
    printf("País 1: %s\n", pais1);
    printf("País 2: %s\n\n", pais2);

    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da Comparação ---\n\n");

    /* ===== Comparação usando switch ===== */

    switch (opcao) {

        case 1: /* População */
            printf("Atributo: População\n");
            printf("%s: %d\n", pais1, pop1);
            printf("%s: %d\n\n", pais2, pop2);

            if (pop1 > pop2)
                printf("Vencedor: %s\n", pais1);
            else if (pop2 > pop1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2: /* Área */
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n\n", pais2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3: /* PIB */
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", pais1, pib1);
            printf("%s: %.2f bilhões\n\n", pais2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 4: /* Pontos turísticos */
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n\n", pais2, pontos2);

            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5: /* Densidade demográfica (regra invertida) */
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.4f hab/km²\n", pais1, dens1);
            printf("%s: %.4f hab/km²\n\n", pais2, dens2);

            if (dens1 < dens2)
                printf("Vencedor: %s\n", pais1);
            else if (dens2 < dens1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
    }

    return 0;
}