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
    float densidade1;
    float PIBpercapita1;

    // Carta2
    char estado2[50];
    char codigo2 [50];
    char cidade2 [50];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    float densidade2;
    float PIBpercapita2;

    // Carta 1

    printf("carta 1 estado: \n");
    scanf("%s", estado1);


    printf("Carta 1 codigo: \n");
    scanf("%s", codigo1);


    printf("Carta 1 cidade: \n");
    scanf("%s", cidade1);

    printf("Carta 1 população: \n");
    scanf("%d", &populacao1);

    printf("Carta 1 area: \n");
    scanf("%f", &area1);

    printf("Carta 1PIB: \n");
    scanf("%f", &PIB1);

    printf("Carta 1 pontosturisticos: \n");
    scanf("%d", &pontosturisticos1);

    // Calculos carta 1
    densidade1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1;

    //Carta 2

    printf("carta 2 estado: \n");
    scanf("%s", estado2);


    printf("Carta 2 codigo: \n");
    scanf("%s", codigo2);

    printf("Carta 2 cidade: \n");
    scanf("%s",cidade2);

    printf("Carta 2 populacao: \n");
    scanf("%d", &populacao2);

    printf("Carta 2 area: \n");
    scanf("%f", &area2);

    printf("Carta 2 PIB: \n");
    scanf("%f", &PIB2);

    printf("Carta 2 pontosturisticos:\n");
    scanf ("%d", &pontosturisticos2);

    // Calculos para carta 2
    
    densidade2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;

    // Resultado

 printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", PIBpercapita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);

    
return 0;
} 
