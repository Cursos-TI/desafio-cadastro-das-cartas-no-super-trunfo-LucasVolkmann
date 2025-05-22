#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    
    // Declarando as variáveis para as duas cidades
    char name1[100], name2[100];
    char state1, state2;
    char cityCode1, cityCode2;
    int population1, population2;
    float area1, area2;
    float PIB1, PIB2;
    int touristAttrationsAmount1, touristAttrationsAmount2;
    float populationDensity1, populationDensity2;
    float PIBperCapita1, PIBperCapita2;

    int oneBillion = 1000000000;

    // Coletando dados da Cidade 1
    printf("Insira o nome da cidade 1: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("Insira o estado da cidade 1: ");
    scanf(" %c", &state1);

    printf("Insira a população da cidade 1: ");
    scanf("%d", &population1);

    printf("Insira a área em km² da cidade 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB em bilhões de reais da cidade 1: ");
    scanf("%f", &PIB1);
    PIB1 *= oneBillion;

    printf("Insira o número de pontos turísticos da cidade 1: ");
    scanf("%d", &touristAttrationsAmount1);

    // Calculando os dados da cidade 1
    populationDensity1 = population1 / area1;
    PIBperCapita1 = PIB1 / population1;

    // Exibindo os dados da Cidade 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", state1);
    printf("Código: %c01\n", state1);
    printf("Nome da Cidade: %s\n", name1);
    printf("População: %d\n", population1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", (PIB1 / oneBillion));
    printf("Número de Pontos Turísticos: %d\n", touristAttrationsAmount1);
    printf("Densidade Populacional: %.2f hab/km²\n", populationDensity1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

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
    scanf("%d", &population2);

    printf("Insira a área em km² da cidade 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB em bilhões de reais da cidade 2: ");
    scanf("%f", &PIB2);
    PIB2 *= oneBillion;

    printf("Insira o número de pontos turísticos da cidade 2: ");
    scanf("%d", &touristAttrationsAmount2);

    // Calculando os dados da cidade 1
    populationDensity2 = population2 / area2;
    PIBperCapita2 = PIB2 / population2;

    // Exibindo os dados da Cidade 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", state2);
    printf("Código: %c02\n", state2);
    printf("Nome da Cidade: %s\n", name2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", (PIB2 / oneBillion));
    printf("Número de Pontos Turísticos: %d\n", touristAttrationsAmount2);
    printf("Densidade Populacional: %.2f hab/km²\n", populationDensity2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

    return 0;
}
