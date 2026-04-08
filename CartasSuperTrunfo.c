#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Carta1 
    char estado1[50];
    char codigo1[50];
    char cidade1 [50];
    int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float PIBpercapita1;

    // Carta2
    char estado2[50];
    char codigo2 [50];
    char cidade2 [50];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float PIBpercapita2;

    printf("Carta 1 estado: \n");
    scanf("%s", &estado);

    printf("Carta 1 codigo: \n");
    scanf("%s", &codigo);

    printf("Carta 1 cidade: \n");
    scanf("%s", &cidade);

    printf("Carta 1 população: \n");
    scanf("%d", &populacao);

    printf("Carta 1 area: \n");
    scanf("%f", &area);

    printf("Carta 1PIB: \n");
    scanf("%f", &PIB);

    printf("Carta 1 pontosturisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta 2 estado: \n");
    scanf("%s", &estado);

    printf("Carta 2 codigo: \n");
    scanf("%s", &codigo);

    printf("Carta 2 cidade: \n");
    scanf("%s",&cidade);

    printf("Carta 2 populacao: \n");
    scanf("%d", &populacao);

    printf("Carta 2 area: \n");
    scanf("%f", &area);

    printf("Carta 2 PIB: \n");
    scanf("%f", &PIB);

    printf("Carta 2 pontosturisticos:\n");
    scanf ("%d", &pontosturisticos);

    (float) populacao / area;
    (float) PIB / populacao;

    printf("Densidade Populacional: %f");
    printf("PIB per capita: %f");

return 0;
} 
