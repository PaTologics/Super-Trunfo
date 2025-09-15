#include <stdio.h>

int main() {

    //carta 1

    char estado[30];
    char codigo[20];
    char cidade[30];
    float pontos;
    unsigned long int habitantes;
    float area, pib;
    float densidade, per;
    float super;

    //carta 2

    char estado2[30];
    char codigo2[20];
    char cidade2[30];
    float pontos2;
    unsigned long int habitantes2;
    float area2, pib2;
    float densidade2, per2;
    float super2;

    //o usuário irá inserir os dados da primeira carta

    printf("Carta 1:\n");
    printf("Qual o estado da sua carta?\n");
    scanf(" %s", estado);

    printf("Qual o código da sua carta?\n");
    scanf("%s", codigo);

    printf("Qual a cidade da sua carta?\n");
    scanf("%s", cidade);

    printf("Qual o número de habitantes da cidade?\n");
    scanf("%lu", &habitantes);

    printf("Qual a área em km² da cidade? \n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib);

    printf("Qual a quantidade de pontos turísticos da cidade? \n");
    scanf("%f", &pontos);

    //Será calculado a densidade populacional e o pib per capita

    densidade  = habitantes / area;
    per = pib / habitantes;
    
    //Calculo do super poder

    super = (habitantes + area + pib + pontos + per) - densidade;

    //O usuário irá inserir os dados da segunda carta

    printf("Carta 2:\n");
    printf("Qual o estado da sua carta?\n");
    scanf(" %s", estado2);

    printf("Qual o código da sua carta?\n");
    scanf("%s", codigo2);

    printf("Qual a cidade da sua carta?\n");
    scanf("%s", cidade2);

    printf("Qual o número de habitantes da cidade? \n");
    scanf("%lu", &habitantes2);

    printf("Qual a área em km² da cidade? \n");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turísticos da cidade? \n");
    scanf("%f", &pontos2);
    printf("\n");

    //Será calculado a densidade populacional e o pib per capita

    densidade2  = (float)habitantes2 / area2;
    per2 = (float)pib2 / habitantes2;

    //calculo do super poder

    super2 = (habitantes2 + area2 + pib2 + pontos2 + per2) - densidade2;

    //Será apresentado os dados fornecidos pelo usuário referente as cartas

    //carta 1

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", habitantes);
    printf("Área (em km²): %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %.2f\n", pontos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", per);
    printf("Super poder: %.2f", super);
    printf(" \n");
    
    //carta 2

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", habitantes2);
    printf("Área (em km²): %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %.2f\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", per2);
    printf("Super poder: %.2f", super2);
    printf("\n");

    //Comparação das cartas 

    printf("População da primeira carta é maior? %d\n", habitantes > habitantes2);
    printf("Área da primeira carta é maior? %d\n", area > area2);
    printf("PIB da primeira carta é maior? %d\n", pib > pib2);
    printf("A carta 1 tem mais pontos turísticos? %d\n", pontos > pontos2);
    printf("Densidade populacional da primeira carta é menor? %d\n", densidade < densidade2);
    printf("PIB per capita da carta 1 e maior? %d\n", per > per2);
    printf("Super poder da carta 1 é maior? %d\n", super > super2);
    printf("\n");

    if(super > super2){
      printf("Carta 1 venceu!\n");
    } else {
      printf("Carta 2 venceu!\n");
    }

  return 0;
}
