#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Nível Mestre

int main() {
    
    // Declarando as variáveis para as duas cidades
    char name1[100], name2[100];
    char state1, state2;
    char cityCode1, cityCode2;
    unsigned long int population1, population2;
    float area1, area2;
    float PIBInBillion1, PIBInBillion2;
    int touristAttrationsAmount1, touristAttrationsAmount2;
    float populationDensity1, populationDensity2;
    float PIBperCapita1, PIBperCapita2;
    float superPower1, superPower2;

    // Criando uma variável para representar o valor de um bilhão
    float oneBillion = 1000000000;

    // Coletando dados da Cidade 1
    printf("Insira o nome da cidade 1: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0'; // Limpa o caractere "\n"

    printf("Insira o estado da cidade 1: ");
    scanf(" %c", &state1);

    printf("Insira a população da cidade 1: ");
    scanf("%lu", &population1);

    printf("Insira a área em km² da cidade 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB em bilhões de reais da cidade 1: ");
    scanf("%f", &PIBInBillion1);

    printf("Insira o número de pontos turísticos da cidade 1: ");
    scanf("%d", &touristAttrationsAmount1);

    // Calculando os dados da cidade 1
    populationDensity1 = (float) population1 / area1;
    PIBperCapita1 = (PIBInBillion1 * oneBillion) / (float) population1;
    superPower1 = (float) population1 + area1 + PIBInBillion1 + (float) touristAttrationsAmount1 + PIBperCapita1 + (1 / populationDensity1);

    // Exibindo os dados da Cidade 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", state1);
    printf("Código: %c01\n", state1);
    printf("Nome da Cidade: %s\n", name1);
    printf("População: %lu\n", population1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIBInBillion1);
    printf("Número de Pontos Turísticos: %d\n", touristAttrationsAmount1);
    printf("Densidade Populacional: %.2f hab/km²\n", populationDensity1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);
    printf("Super poder: %.2f\n", superPower1);
    printf("%lu + %.2f + %.2f + %.2f + %.2f + (1 / %.2f) \n", population1, area1, PIBInBillion1, (double) touristAttrationsAmount1, PIBperCapita1, populationDensity1);

    printf("\n");

    // limpa o stdin
    while (getchar() != '\n');

    // Coletando dados da cidade 2
    printf("Insira o nome da cidade 2: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';

    printf("Insira o estado da cidade 2: ");
    scanf(" %c", &state2);

    printf("Insira a população da cidade 2: ");
    scanf("%lu", &population2);

    printf("Insira a área em km² da cidade 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB em bilhões de reais da cidade 2: ");
    scanf("%f", &PIBInBillion2);

    printf("Insira o número de pontos turísticos da cidade 2: ");
    scanf("%d", &touristAttrationsAmount2);

    // Calculando os dados da cidade 1
    populationDensity2 = (float) population2 / area2;
    PIBperCapita2 = (PIBInBillion2 * oneBillion) / (float) population2;
    superPower2 = (float) population2 + area2 + PIBInBillion2 + (float) touristAttrationsAmount2 + PIBperCapita2 + (1 / populationDensity2);

    // Exibindo os dados da Cidade 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", state2);
    printf("Código: %c02\n", state2);
    printf("Nome da Cidade: %s\n", name2);
    printf("População: %lu\n", population2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIBInBillion2);
    printf("Número de Pontos Turísticos: %d\n", touristAttrationsAmount2);
    printf("Densidade Populacional: %.2f hab/km²\n", populationDensity2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("Super poder: %.2f\n", superPower2);
    printf("%lu + %.2f + %.2f + %.2f + %.2f + (1 / %.2f)", population2, area2, PIBInBillion2, (double) touristAttrationsAmount2, PIBperCapita2, populationDensity2);

    printf("\n");
    printf("\n");

    // Comparando os dados das cartas
    printf("Comparação de Cartas: \n");
    printf("População: Carta 1 venceu? (%d) \n", population1 > population2);
    printf("Área: Carta 1 venceu? (%d) \n", area1 > area2);
    printf("PIB: Carta 1 venceu? (%d) \n", PIBInBillion1 > PIBInBillion2);
    printf("Pontos Turísticos: Carta 1 venceu? (%d) \n", touristAttrationsAmount1 > touristAttrationsAmount2);
    printf("Densidade Populacional: Carta 1 venceu? (%d) \n", populationDensity1 < populationDensity2);
    printf("PIB per Capita: Carta 1 venceu? (%d) \n", PIBperCapita1 > PIBperCapita2);
    printf("Super Poder: Carta 1 venceu? (%d) \n", superPower1 > superPower2);

    printf("\n");
    printf("\n");

    return 0;
}
