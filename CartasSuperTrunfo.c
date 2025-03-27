#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    printf("CARTA 1\n");

    char estado;
    char codigo[20];
    char cidade[10];
    int populacao;
    float area;
    float pib;
    int turistico;

    printf("Insira o estado: \n");
    scanf("%c", &estado);
    printf("Estado: %c\n", estado);

    printf("Insira o codigo: \n");
    scanf("%s", &codigo);
    printf("Codigo: %s\n", codigo);
    printf("Insira a cidade: \n");
    scanf("%s", &cidade);
    printf("Cidade: %s\n", cidade);

    printf("Insira a população: \n");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Insira a área: \n");
    scanf("%f", &area);
    printf("Área: %f\n", area);

    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("PIB: %f\n", pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &turistico);
    printf("Número de pontos turísticos: %d\n", turistico);

    return 0;


}

