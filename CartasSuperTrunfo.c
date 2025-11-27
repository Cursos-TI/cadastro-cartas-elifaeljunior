#include <stdio.h>

int main(){

    char estado1, estado2, cod1[3], cod2[3], cidade1[30], cidade2[30];
    int pop1, pop2, tur1, tur2;
    float area1, area2, pib1, pib2;

    printf("Olá, Seja bem-vindo(a) ao meu primeiro programa em C\nVamos brincar de um jogo chamado Super Trunfo\nVamos começar!\n");
    printf("Vamos escolher as informações de uma carta por vez.\n");

    printf("Escolhe uma letra de 'A' a 'H'\nEssa letra irá representar o estado em que escolher.\n\n");
    
    printf("Primeira Letra: ");
    scanf(" %c", &estado1);

    printf("Segunda Letra: ");
    scanf(" %c", &estado2);
    
    printf("\nEscolha o código da cidade por números entre 01 e 04\n\n");

    printf("Primeiro código: ");
    scanf("%s", cod1);

    printf("Segundo código: ");
    scanf("%s", cod2);

    printf("\nDigite o nome da cidade que deseja\nPor exemplo:\nSalvador\nCamaçari\nFeira de Santana\n\n");
    
    printf("Digite a primeira Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a Segunda Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("\nDigite a população da Cidade\n\n");
    
    printf("População Cidade 1: ");
    scanf("%d", &pop1);

    printf("População Cidade 2: ");
    scanf("%d", &pop2);

    printf("\nDigite a Área da cidade\n\n");

    printf("Área Cidade 1: ");
    scanf("%f", &area1);

    printf("Área Cidade 2: ");
    scanf("%f", &area2);

    printf("\nDigite o PIB da cidade\n\n");

    printf("PIB Cidade 1: ");
    scanf("%f", &pib1);

    printf("PIB Cidade 2: ");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de pontos turísticos\n\n");

    printf("Pontos turísticos cidade 1: ");
    scanf("%d", &tur1);

    printf("Pontos turísticos cidade 2: ");
    scanf("%d", &tur2);

    printf("\nCarta 1:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n", estado1, estado1, cod1, cidade1, pop1, area1, pib1, tur1);
    printf("Carta 2:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n", estado2, estado2, cod2, cidade2, pop2, area2, pib2, tur2);


return 0;
} 
