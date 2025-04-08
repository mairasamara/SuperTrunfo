#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[5] = "A01";
    char cidade1[50] = "São Paulo";
    unsigned long int populacao1 = 12325000;  // agora é unsigned long int
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;

    // Carta 2
    char estado2 = 'B';
    char codigo2[5] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;  // agora é unsigned long int
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;

    // Cálculos para a Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;  // PIB per capita em reais por pessoa
    float superPoder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos1 + 1 / densidade1 + pibPerCapita1;

    // Cálculos para a Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;  // PIB per capita em reais por pessoa
    float superPoder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos2 + 1 / densidade2 + pibPerCapita2;

    // Comparações de Atributos e Resultados
    printf("Comparação de Cartas:\n");

    // Comparando População
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    // Comparando Área
    if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    // Comparando PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    // Comparando Pontos Turísticos
    if (pontos1 > pontos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    // Comparando Densidade Populacional (menor valor vence)
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    // Comparando PIB per Capita
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    // Comparando Super Poder
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}
