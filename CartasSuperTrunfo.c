#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");

    char estado;
    char codigo[10];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turistico;


    printf("CARTA 1\n");

    printf("Insira o estado: \n");
    scanf("%c", &estado);
    printf("Estado: %c\n", estado);

    printf("Insira o codigo: \n");
    scanf("%s", codigo);
    printf("Codigo: %s\n", codigo);

    printf("Insira a cidade: \n");
    scanf("%s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Insira a população: \n");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Insira a área: \n");
    scanf("%f", &area);
    printf("Área: %.2f km²\n", area);

    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &turistico);
    printf("Número de pontos turísticos: %d\n", turistico);
    printf("\n");


    //INFORMAÇÕES DA CARTA 2//

    printf("CARTA 2\n");

    printf("Insira o estado: \n");
    scanf(" %[^\n]", &estado);
    printf("Estado: %c\n", estado);

    printf("Insira o codigo: \n");
    scanf("%s", codigo);
    printf("Codigo: %s\n", codigo);

    printf("Insira a cidade: \n");
    scanf("%s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Insira a população: \n");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Insira a área: \n");
    scanf("%f", &area);
    printf("Área: %.2f km²\n", area);

    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &turistico);
    printf("Número de pontos turísticos: %d\n", turistico);
    




    return 0;
}