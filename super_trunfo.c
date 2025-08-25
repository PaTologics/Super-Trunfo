#include <stdio.h>

int main() {

    //carta 1

    char estado;
    char codigo[20];
    char cidade[30];
    int habitantes, pontos;
    float area, pib;
    float densidade, per;

    //carta 2

    char estado2;
    char codigo2[20];
    char cidade2[30];
    int habitantes2, pontos2;
    float area2, pib2;
    float densidade2, per2;

    //o usuário irá inserir os dados da primeira carta

    printf("Carta 1:\n");
    printf("Qual o estado da sua carta?\n");
    scanf(" %c", &estado);

    printf("Qual o código da sua carta?\n");
    scanf("%s", codigo);

    printf("Qual a cidade da sua carta?\n");
    scanf("%s", cidade);

    printf("Qual o número de habitantes da cidade?\n");
    scanf("%d", &habitantes);

    printf("Qual a área em km² da cidade? \n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib);

    printf("Qual a quantidade de pontos turísticos da cidade? \n");
    scanf("%d", &pontos);

    //Será calculado a densidade populacional e o pib per capita

    densidade  = habitantes / area;
    per = pib / habitantes;

    //O usuário irá inserir os dados da segunda carta

    printf("Carta 2:\n");
    printf("Qual o estado da sua carta?\n");
    scanf(" %c", &estado2);

    printf("Qual o código da sua carta?\n");
    scanf("%s", codigo2);

    printf("Qual a cidade da sua carta?\n");
    scanf("%s", cidade2);

    printf("Qual o número de habitantes da cidade? \n");
    scanf("%d", &habitantes2);

    printf("Qual a área em km² da cidade? \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turísticos da cidade? \n");
    scanf("%d", &pontos2);
    printf("\n");

    //Será calculado a densidade populacional e o pib per capita

    densidade2  = habitantes2 / area2;
    per2 = pib2 / habitantes2;

    //Será apresentado os dados fornecidos pelo usuário referente as cartas

    //carta 1

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", habitantes);
    printf("Área (em km²): %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", per);
    printf("\n");
    
    //carta 2

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", habitantes2);
    printf("Área (em km²): %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", per2);






    return 0;
}
