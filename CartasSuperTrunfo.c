#include <stdio.h>

int main() {
    char estado1, codigodacarta1[4], nomedacidade1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1;

    char estado2, codigodacarta2[4], nomedacidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    printf("Digite a letra do primeiro estado:\n");
    scanf(" %c", &estado1);  // O espaço antes de %c resolve problemas com '\n'

    printf("Digite o código da primeira carta:\n");
    scanf("%3s", codigodacarta1);

    printf("Digite o nome da primeira cidade (sem espaços):\n");
    scanf("%s", nomedacidade1);

    printf("Digite a população da primeira cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira cidade em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira cidade:\n");
    scanf("%d", &pontosturisticos1);

    // Entrada para a segunda carta
    printf("\nDigite a letra do segundo estado:\n");
    scanf(" %c", &estado2);  // O espaço antes de %c resolve problemas com '\n'

    printf("Digite o código da segunda carta:\n");
    scanf("%3s", codigodacarta2);

    printf("Digite o nome da segunda cidade (sem espaços):\n");
    scanf("%s", nomedacidade2);

    printf("Digite a população da segunda cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados da primeira carta
    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    // Exibição dos dados da segunda carta
    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}