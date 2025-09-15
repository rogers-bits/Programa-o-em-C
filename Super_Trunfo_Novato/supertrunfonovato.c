#include <stdio.h>

int main(){

    // OBJETIVO: Criar 2 cartas de super trunfo.
    // 1- criar a estrutura das cartas com variaveis. 
    // 2- solicitar ao usuario os dados das cartas. 
    // 3- armazenar os dados digitados pelo usuario nas variaveis adequadas.
    // 4- exibir os dados armazenados nas variaveis.

    // Criando variaveis

    // Carta 01
    char codigo1[4];
    char estado1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Carta 02
    char codigo2[4];
    char estado2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // solicitando os dados (printf).
    // lendo e armazenando dados nas variaveis (scanf).


    // Carta 01
    printf(" Digite Os Dados da Carta 01 (Não Utilize Espaço Nos Nomes)\n");
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área em km2: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Carta 02
    printf("\nDigite Os Dados da Carta 02 (Não Utilize Espaço Nos Nomes)\n");
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área em km2: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // exibindo cartas
    // carta 01
    printf("\n--- CARTA 01 ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área km2: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    // Carta 02
        printf("\n--- CARTA 02 ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área km2: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    return 0;
}