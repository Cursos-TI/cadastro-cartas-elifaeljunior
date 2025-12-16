#include <stdio.h>

int main() {

    char estado1[3] = "SP";
    char estado2[3] = "RJ";

    char cidade1[30] = "São Paulo";
    char cidade2[30] = "Rio de Janeiro";

    int pop1 = 12300000;
    int pop2 = 6000000;

    float area1 = 1521.11;
    float area2 = 1200.27;

    float pib1 = 699.28;
    float pib2 = 364.74;

    int pontos1 = 15;
    int pontos2 = 10;

    float dens1, dens2, pibcap1, pibcap2;

    /* Cálculos */
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    pibcap1 = pib1 / pop1;
    pibcap2 = pib2 / pop2;

  
    printf("Comparação de cartas (Atributo: População)\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, pop1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", cidade2, estado2, pop2);

    if (pop1 > pop2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pop2 > pop1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}