#include <stdio.h>

int main() {
    // --- Carta 1 ---
    char estado1[3], codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_per_capita1, super_trunfo1;

    // --- Carta 2 ---
    char estado2[3], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_per_capita2, super_trunfo2;

    // --- Entrada da Carta 1 ---
    printf("Carta 1:\n");
    printf("Estado (2 letras, ex: SC): ");
    scanf("%2s", estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao (somente numeros inteiros): ");
    scanf("%lu", &populacao1);

    printf("Area (km²) (use ponto para decimais): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes de reais) (use ponto para decimais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // --- Entrada da Carta 2 ---
    printf("\nCarta 2:\n");
    printf("Estado (2 letras, ex: PR): ");
    scanf("%2s", estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao (somente numeros inteiros): ");
    scanf("%lu", &populacao2);

    printf("Area (km²) (use ponto para decimais): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais) (use ponto para decimais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // --- Calculando densidade, PIB per capita e Super Trunfo ---
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9) / populacao1;
    super_trunfo1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0 / densidade1);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9) / populacao2;
    super_trunfo2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0 / densidade2);

    // --- Comparando ---
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, (pontos1 > pontos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2) ? 1 : 0);
    printf("Super Trunfo: Carta %d venceu (%d)\n", (super_trunfo1 > super_trunfo2) ? 1 : 2, (super_trunfo1 > super_trunfo2) ? 1 : 0);

    return 0;
}

