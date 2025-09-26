#include <stdio.h>

int main (){

// Super Trunfo : registrar e exibir 02 cartas, com entrada e saida simples de dados 


// definindo variaveis carta 01

    char codigo1[4];
    char estado1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibp1; 

// definindo variaveis carta 02
    char codigo2[4];
    char estado2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibp2;

    // Exibir as informações da carta 01.

    printf("--- Carta 01 ---\n");
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turistícos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float) populacao1 / area1;
    pibp1 = (float) pib1 / populacao1;

    printf("densidade populacioal: %.2f\n", densidade1);
    printf("pib per capta: %.2f\n", pibp1);


    // Exibir as informações da carta 02.

    printf("\n--- Carta 02 ---\n");
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Àrea: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turistícos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float) populacao2 / area2;
    pibp2 = (float) pib2 / populacao2;

    printf("densidade populacioal: %.2f\n", densidade2);
    printf("pib per capta: %.2f\n", pibp2);


    return 0;



}