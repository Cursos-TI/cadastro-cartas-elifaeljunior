#include <stdio.h>

int main() {

    char estado1, estado2, cod1[3], cod2[3], cidade1[30], cidade2[30];

    unsigned long int pop1, pop2;
    int tur1, tur2;

    float area1, area2, pib1, pib2;
    float dens1, dens2, pibcap1, pibcap2;
    float super1, super2;

    printf("Olá, Seja bem-vindo(a) ao Super Trunfo!\n\n");

    printf("Escolha uma letra de 'A' a 'H' para o estado\n");
    printf("Primeira Letra: ");
    scanf(" %c", &estado1);
    printf("Segunda Letra: ");
    scanf(" %c", &estado2);

    printf("\nEscolha o código da cidade (01 a 04)\n");
    printf("Primeiro código: ");
    scanf("%s", cod1);
    printf("Segundo código: ");
    scanf("%s", cod2);

    printf("\nDigite o nome das cidades\n");
    printf("Cidade 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Cidade 2: ");
    scanf(" %[^\n]", cidade2);

    printf("\nDigite a população\n");
    printf("População Cidade 1: ");
    scanf("%lu", &pop1);
    printf("População Cidade 2: ");
    scanf("%lu", &pop2);

    printf("\nDigite a área da cidade\n");
    printf("Área Cidade 1: ");
    scanf("%f", &area1);
    printf("Área Cidade 2: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB da cidade\n");
    printf("PIB Cidade 1: ");
    scanf("%f", &pib1);
    printf("PIB Cidade 2: ");
    scanf("%f", &pib2);

    printf("\nDigite os pontos turísticos\n");
    printf("Pontos turísticos Cidade 1: ");
    scanf("%d", &tur1);
    printf("Pontos turísticos Cidade 2: ");
    scanf("%d", &tur2);

 
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    pibcap1 = pib1 / pop1;
    pibcap2 = pib2 / pop2;

    super1 = (float)pop1 + area1 + pib1 + tur1 + pibcap1 + (1.0f / dens1);
    super2 = (float)pop2 + area2 + pib2 + tur2 + pibcap2 + (1.0f / dens2);

    
    printf("\nCarta 1:\n");
    printf("Estado: %c\nCódigo: %c%s\nCidade: %s\n", estado1, estado1, cod1, cidade1);
    printf("População: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", pop1, area1, pib1, tur1);
    printf("Densidade: %.2f\nPIB per Capita: %.6f\nSuper Poder: %.2f\n\n", dens1, pibcap1, super1);
    printf("Carta 2:\n");
    printf("Estado: %c\nCódigo: %c%s\nCidade: %s\n", estado2, estado2, cod2, cidade2);
    printf("População: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\n", pop2, area2, pib2, tur2);
    printf("Densidade: %.2f\nPIB per Capita: %.6f\nSuper Poder: %.2f\n\n",dens2, pibcap2, super2);

 
    printf("Comparação de Cartas:\n\n");

    printf("População: Carta 1 venceu (%d)\n", pop1 > pop2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", tur1 > tur2);

    
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dens1 < dens2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibcap1 > pibcap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}