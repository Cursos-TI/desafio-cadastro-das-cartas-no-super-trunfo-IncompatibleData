#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");

    char estado, estado2;
    char codigo[20], codigo2[20];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turisticos, turisticos2;
    float densidade, densidade2;
    float pibpercapita, pibpercapita2;
    

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
    scanf("%lu", &populacao);
    printf("População: %lu\n", populacao);

    printf("Insira a área: \n");
    scanf("%f", &area);
    printf("Área: %.2f km²\n", area);

    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &turisticos);
    printf("Número de pontos turísticos: %d\n", turisticos);

    densidade = (populacao / area);
    printf("Densidade é: %.2f\n", densidade);

    pibpercapita = (pib / populacao);
    printf("PIBperCapita é: %.2f\n", pibpercapita);

    printf("\n");


    //INFORMAÇÕES DA CARTA 2//

    printf("CARTA 2\n");

    printf("Insira o estado: \n");
    scanf(" %[^\n]", &estado2);
    printf("Estado: %c\n", estado2);

    printf("Insira o codigo: \n");
    scanf("%s", codigo2);
    printf("Codigo: %s\n", codigo2);

    printf("Insira a cidade: \n");
    scanf("%s", cidade2);
    printf("Cidade: %s\n", cidade2);

    printf("Insira a população: \n");
    scanf("%lu", &populacao2);
    printf("População: %lu\n", populacao2);

    printf("Insira a área: \n");
    scanf("%f", &area2);
    printf("Área: %.2f km²\n", area2);

    printf("Insira o PIB: \n");
    scanf("%f", &pib2);
    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &turisticos2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    
    densidade2 = (populacao2 / area2);
    printf("Densidade é: %.2f\n", densidade2);

    pibpercapita2 = (pib2 / populacao2);
    printf("PIBperCapita é: %.2f\n", pibpercapita2);

    //Comparações das cartas
    int resultadoPopulacao;
    float resultadoArea;
    float resultadoPib;
    int resultadoTuristicos;
    float resultadoDensidade;
    float resultadoPibPerCapita;

    resultadoPopulacao = populacao > populacao2;
    printf("CARTA 1 > CARTA 2: %d\n", resultadoPopulacao);

    resultadoArea = area > area2;
    printf("CARTA 1 > CARTA 2: %.0f\n", resultadoArea);

    resultadoPib = pib > pib2;
    printf("CARTA > CARTA 2: %.0f\n", resultadoPib);

    resultadoTuristicos = turisticos > turisticos2;
    printf("CARTA > CARTA 2: %d\n", resultadoTuristicos);

    resultadoDensidade = densidade < densidade2;
    printf("CARTA > CARTA 2: %.0f\n", resultadoDensidade);

    resultadoPibPerCapita = pibpercapita > pibpercapita2;
    printf("CARTA > CARTA 2: %.0f\n", resultadoPibPerCapita);

    float SuperPoderCarta1 = populacao + area + pib + pibpercapita + densidade +  turisticos;
    float SuperPoderCarta2 = populacao2 + area2 + pib2 + pibpercapita2 + densidade2 +  turisticos2;
    printf("CARTA 2 > CARTA 1: %.0f\n"), (SuperPoderCarta1 > SuperPoderCarta2);




  


    return 0;
}