#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[60], cidade2[60];
    int populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;

    // Leitura dos dados da primeira carta
    printf("Informações da 1ª carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (Ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // permite espaços
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &PIB1);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // Leitura dos dados da segunda carta
    printf("\nInformações da 2ª carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (Ex: B03): ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &PIB2);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}