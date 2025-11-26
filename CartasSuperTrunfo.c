#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // dados da primeira carta
    char estado;
    char nome[20];
    char codigoCarta[4];
    int populacao, nPontosTuristicos;
    float area, pib;

    // dados da segunda carta
    char estado2;
    char nome2[20];
    char codigoCarta2[4];
    int populacao2, nPontosTuristicos2;
    float area2, pib2;

  // Área para entrada de dados
    printf("\nSuper Trunfo\n");

    // solicitar os dados da primeira carta
    printf("Digite os dados da primeira carta conforme o solicitado\n");

    printf("Uma letra de 'A' a 'H' para representar o Estado:\n");
    scanf(" %c", &estado);

    printf("Código da carta:\n");
    scanf("%s", codigoCarta);

    printf("Nome da cidade:\n");
    scanf("%s", nome);

    printf("População da cidade:\n");
    scanf("%d", &populacao);

    printf("Área da cidade em km²:\n");
    scanf("%f", &area);

    printf("PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &nPontosTuristicos);

    // mostrar os dados carta1
    printf("\nCarta: 1\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade em km²: %.2f\n", area);
    printf("PIB da cidade: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n\n", nPontosTuristicos);

 // solicitar dados da segunda carta
    printf("Digite os dados da segunda carta conforme o solicitado\n");

    printf("Uma letra de 'A' a 'H' para representar o Estado:\n");
    scanf(" %c", &estado2);

    printf("Código da carta:\n");
    scanf("%s", codigoCarta2);

    printf("Nome da cidade:\n");
    scanf("%s", nome2);

    printf("População da cidade:\n");
    scanf("%d", &populacao2);

    printf("Área da cidade em km²:\n");
    scanf("%f", &area2);

    printf("PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &nPontosTuristicos2);

    
    // mostrar os dados carta 2
    printf("\nCarta: 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População da cidade: %d\n", populacao2);
    printf("Área da cidade em km²: %.2f\n", area2);
    printf("PIB da cidade: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n\n", nPontosTuristicos2);



return 0;
} 
