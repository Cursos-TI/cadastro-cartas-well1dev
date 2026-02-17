#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado[50];
    char codigo[50];
    char cidade [50];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

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

return 0;
} 
