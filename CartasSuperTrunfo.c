#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível Novato

int main() {

    char name1[100], name2[100];
    char state1[3], state2[3];
    char cityCode1, cityCode2;
    unsigned long int population1, population2;
    float area1, area2;
    float PIBInBillion1, PIBInBillion2;
    int touristAttrationsAmount1, touristAttrationsAmount2;
    float populationDensity1, populationDensity2;
    float PIBperCapita1, PIBperCapita2;
    float superPower1, superPower2;

    float oneBillion = 1000000000.0;

    printf("Insira o nome da cidade 1: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("Insira o estado da cidade 1: ");
    scanf(" %2s", &state1);

    printf("Insira a população da cidade 1: ");
    scanf("%lu", &population1);

    printf("Insira a área em km² da cidade 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB em bilhões de reais da cidade 1: ");
    scanf("%f", &PIBInBillion1);

    printf("Insira o número de pontos turísticos da cidade 1: ");
    scanf("%d", &touristAttrationsAmount1);

    populationDensity1 = (float) population1 / area1;
    PIBperCapita1 = (PIBInBillion1 * oneBillion) / (float) population1;
    superPower1 = (float) population1 + area1 + PIBInBillion1 + (float) touristAttrationsAmount1 + PIBperCapita1 + (1 / populationDensity1);

    printf("\nCarta 1: %s (%s), Código: %s01\n", name1, state1, state1);
    printf("-> População: %lu\n", population1);
    printf("-> Área: %.2f km²\n", area1);
    printf("-> PIB: %.2f bilhões de reais\n", PIBInBillion1);
    printf("-> Número de Pontos Turísticos: %d\n", touristAttrationsAmount1);
    printf("-> Densidade Populacional: %.2f hab/km²\n", populationDensity1);
    printf("-> PIB per Capita: %.2f reais\n", PIBperCapita1);
    printf("-> Super poder: %.2f\n", superPower1);

    printf("---------------------------------- \n\n");

    while (getchar() != '\n');

    printf("Insira o nome da cidade 2: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';

    printf("Insira o estado da cidade 2: ");
    scanf(" %2s", &state2);

    printf("Insira a população da cidade 2: ");
    scanf("%lu", &population2);

    printf("Insira a área em km² da cidade 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB em bilhões de reais da cidade 2: ");
    scanf("%f", &PIBInBillion2);

    printf("Insira o número de pontos turísticos da cidade 2: ");
    scanf("%d", &touristAttrationsAmount2);

    populationDensity2 = (float) population2 / area2;
    PIBperCapita2 = (PIBInBillion2 * oneBillion) / (float) population2;
    superPower2 = (float) population2 + area2 + PIBInBillion2 + (float) touristAttrationsAmount2 + PIBperCapita2 + (1 / populationDensity2);

    printf("\nCarta 2: %s (%s), Código: %s02\n", name2, state2, state2);
    printf("-> População: %lu\n", population2);
    printf("-> Área: %.2f km²\n", area2);
    printf("-> PIB: %.2f bilhões de reais\n", PIBInBillion2);
    printf("-> Número de Pontos Turísticos: %d\n", touristAttrationsAmount2);
    printf("-> Densidade Populacional: %.2f hab/km²\n", populationDensity2);
    printf("-> PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("-> Super poder: %.2f\n", superPower2);

    printf("---------------------------------- \n\n");

    printf("Comparação de cartas (Atributo: 'População'):\n");
    printf("\n");

    printf("Carta 1 - %s (%s): '%lu'\n", name1, state1, population1);
    printf("Carta 2 - %s (%s): '%lu'\n", name2, state2, population2);

    int result = population1 > population2;
    if (result == 1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", name2);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", name2);
    }


    // Comparação de cartas (Atributo: População):
    // Carta 1 - São Paulo (SP): 12.300.000
    // Carta 2 - Rio de Janeiro (RJ): 6.000.000
    // Resultado: Carta 1 (São Paulo) venceu!

    return 0;
}
