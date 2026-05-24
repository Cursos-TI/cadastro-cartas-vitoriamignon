#include <stdio.h>

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;


    // Área para entrada de dados

    printf("=== Cadastro Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    printf("\n=== Cadastro Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // Cálculos

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 =
    populacao1 +
    area1 +
    pib1 +
    pontosTuristicos1 +
    pibPerCapita1 +
    (1 / densidade1);

    superPoder2 =
    populacao2 +
    area2 +
    pib2 +
    pontosTuristicos2 +
    pibPerCapita2 +
    (1 / densidade2);


    // Área para exibição dos dados da cidade

    printf("\n=== CARTA 1 ===\n");
    printf("Cidade: %s\n", cidade1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);


    printf("\n=== CARTA 2 ===\n");
    printf("Cidade: %s\n", cidade2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);


    // Comparações

    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: %d\n", populacao1 > populacao2);

    printf("Area: %d\n", area1 > area2);

    printf("PIB: %d\n", pib1 > pib2);

    printf("Pontos Turisticos: %d\n",
    pontosTuristicos1 > pontosTuristicos2);

    printf("Densidade Populacional: %d\n",
    densidade1 < densidade2);

    printf("PIB per Capita: %d\n",
    pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: %d\n",
    superPoder1 > superPoder2);

    return 0;
}