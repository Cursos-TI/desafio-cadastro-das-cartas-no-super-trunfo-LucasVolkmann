#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível Mestre

int main() {


    char name1[100], name2[100];
    char state1[3], state2[3];
    unsigned long int population1, population2;
    float area1, area2;
    float PIBInBillion1, PIBInBillion2;
    int touristAttractionsAmount1, touristAttractionsAmount2;
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
    scanf("%d", &touristAttractionsAmount1);

    populationDensity1 = (float) population1 / area1;
    PIBperCapita1 = (PIBInBillion1 * oneBillion) / (float) population1;
    superPower1 = (float) population1 + area1 + PIBInBillion1 + (float) touristAttractionsAmount1 + PIBperCapita1 + (1 / populationDensity1);

    printf("\nCarta 1: %s (%s), Código: %s01\n", name1, state1, state1);
    printf("-> População: %lu\n", population1);
    printf("-> Área: %.2f km²\n", area1);
    printf("-> PIB: %.2f bilhões de reais\n", PIBInBillion1);
    printf("-> Número de Pontos Turísticos: %d\n", touristAttractionsAmount1);
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
    scanf("%d", &touristAttractionsAmount2);

    populationDensity2 = (float) population2 / area2;
    PIBperCapita2 = (PIBInBillion2 * oneBillion) / (float) population2;
    superPower2 = (float) population2 + area2 + PIBInBillion2 + (float) touristAttractionsAmount2 + PIBperCapita2 + (1 / populationDensity2);

    printf("\nCarta 2: %s (%s), Código: %s02\n", name2, state2, state2);
    printf("-> População: %lu\n", population2);
    printf("-> Área: %.2f km²\n", area2);
    printf("-> PIB: %.2f bilhões de reais\n", PIBInBillion2);
    printf("-> Número de Pontos Turísticos: %d\n", touristAttractionsAmount2);
    printf("-> Densidade Populacional: %.2f hab/km²\n", populationDensity2);
    printf("-> PIB per Capita: %.2f reais\n", PIBperCapita2);
    printf("-> Super poder: %.2f\n", superPower2);

    printf("---------------------------------- \n\n");

    int firstAttribute;
    double city1Sum = 0;
    double city2Sum = 0;

    printf("Escolha dos atributos. Escolha dois atributos no total.\n");
    printf("Insira o primeiro atributo: \n");
    printf("[0]: População\n");
    printf("[1]: Área\n");
    printf("[2]: PIB\n");
    printf("[3]: Número de Pontos Turísticos\n");
    printf("[4]: Densidade Populacional\n");
    printf("[5]: PIB per Capita\n");
    printf("[6]: Super poder\n");
    printf("> ");
    scanf("%1d", &firstAttribute);

    if (firstAttribute < 0 || firstAttribute > 6) {
        printf("\nOpção inválida");
        return 0;
    }

    int secondAttribute;
    printf("\nInsira o segundo atributo: \n");
    firstAttribute == 0 ? "" : printf("[0]: População\n");
    firstAttribute == 1 ? "" : printf("[1]: Área\n");
    firstAttribute == 2 ? "" : printf("[2]: PIB\n");
    firstAttribute == 3 ? "" : printf("[3]: Número de Pontos Turísticos\n");
    firstAttribute == 4 ? "" : printf("[4]: Densidade Populacional\n");
    firstAttribute == 5 ? "" : printf("[5]: PIB per Capita\n");
    firstAttribute == 6 ? "" : printf("[6]: Super poder\n");
    printf("> ");
    scanf("%1d", &secondAttribute);

    if (firstAttribute < 0 || firstAttribute > 6) {
        printf("\nOpção inválida");
        return 0;
    }

    if (firstAttribute == secondAttribute) {
        printf("Opção inválida. Escolha dois atributos diferentes para comparação.");
        return 0;
    }

    printf("\n");
    printf("\nRESULTADOS");

    printf("\n#################################\n");
    switch (firstAttribute) {
        case 0:
            printf("População\n");
            printf("(%s) %lu x %lu (%s)\n", name1, population1, population2, name2);
            if (population1 == population2) {
                printf("Os atributos são iguais");
            } else if (population1 > population2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += (float) population1;
            city2Sum += (float) population2;
            break;
        case 1:
            printf("Área\n");
            printf("(%s) %.2f x %.2f (%s)\n", name1, area1, area2, name2);
            if (area1 == area2) {
                printf("Os atributos são iguais");
            } else if (area1 > area2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += area1;
            city2Sum += area2;
            break;
        case 2:
            printf("PIB\n");
            printf("(%s) %.2f x %.2f (%s)\n", name1, PIBInBillion1, PIBInBillion2, name2);
            if (PIBInBillion1 == PIBInBillion2) {
                printf("Os atributos são iguais");
            } else if (PIBInBillion1 > PIBInBillion2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += PIBInBillion1;
            city2Sum += PIBInBillion2;
            break;
        case 3:
            printf("Número de Pontos Turísticos\n");
            printf("(%s) %d x %d (%s)\n", name1, touristAttractionsAmount1, touristAttractionsAmount2, name2);
            if (touristAttractionsAmount1 == touristAttractionsAmount2) {
                printf("Os atributos são iguais");
            } else if (touristAttractionsAmount1 > touristAttractionsAmount2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += (float) touristAttractionsAmount1;
            city2Sum += (float) touristAttractionsAmount2;
            break;
        case 4:
            printf("Densidade Populacional\n");
            printf("(%s) %.2f x %.2f (%s)\n", name1, populationDensity1, populationDensity2, name2);
            if (populationDensity1 == populationDensity2) {
                printf("Os atributos são iguais");
            } else if (populationDensity1 < populationDensity2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += populationDensity1;
            city2Sum += populationDensity2;
            break;
        case 5:
            printf("PIB per Capita\n");
            printf("(%s) %.2f x %.2f (%s)\n", name1, PIBperCapita1, PIBperCapita2, name2);
            if (PIBperCapita1 == PIBperCapita2) {
                printf("Os atributos são iguais");
            } else if (PIBperCapita1 > PIBperCapita2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += PIBperCapita1;
            city2Sum += PIBperCapita2;
            break;
        case 6:
            printf("Super poder\n");
            printf("(%s) %.2f x %.2f (%s)\n", name1, superPower1, superPower2, name2);
            if (superPower1 == superPower2) {
                printf("Os atributos são iguais");
            } else if (superPower1 > superPower2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += superPower1;
            city2Sum += superPower2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }
    printf("\n----------------------------\n");
    switch (secondAttribute) {
        case 0:
            printf("População\n");
            printf("(%s) %lu x %lu (%s)\n", name1, population1, population2, name2);
            if (population1 == population2) {
                printf("Os atributos são iguais");
            } else if (population1 > population2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += (float) population1;
            city2Sum += (float) population2;
            break;
        case 1:
            printf("Área\n");
            printf("(%s) %.2f x %.2f (%s)\n", name1, area1, area2, name2);
            if (area1 == area2) {
                printf("Os atributos são iguais");
            } else if (area1 > area2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += area1;
            city2Sum += area2;
            break;
        case 2:
            printf("PIB\n");
            printf("(%s) %.2f x %.2f (%s)\n", name1, PIBInBillion1, PIBInBillion2, name2);
            if (PIBInBillion1 == PIBInBillion2) {
                printf("Os atributos são iguais");
            } else if (PIBInBillion1 > PIBInBillion2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += PIBInBillion1;
            city2Sum += PIBInBillion2;
            break;
        case 3:
            printf("Número de Pontos Turísticos\n");
            printf("(%s) %d x %d (%s)\n", name1, touristAttractionsAmount1, touristAttractionsAmount2, name2);
            if (touristAttractionsAmount1 == touristAttractionsAmount2) {
                printf("Os atributos são iguais");
            } else if (touristAttractionsAmount1 > touristAttractionsAmount2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += (float) touristAttractionsAmount1;
            city2Sum += (float) touristAttractionsAmount2;
            break;
        case 4:
            printf("Densidade Populacional\n");
            printf("(%s) %.2f x %.2f (%s)\n", name1, populationDensity1, populationDensity2, name2);
            if (populationDensity1 == populationDensity2) {
                printf("Os atributos são iguais");
            } else if (populationDensity1 < populationDensity2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += populationDensity1;
            city2Sum += populationDensity2;
            break;
        case 5:
            printf("PIB per Capita\n");
            printf("(%s) %.2f x %.2f (%s)\n", name1, PIBperCapita1, PIBperCapita2, name2);
            if (PIBperCapita1 == PIBperCapita2) {
                printf("Os atributos são iguais");
            } else if (PIBperCapita1 > PIBperCapita2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += PIBperCapita1;
            city2Sum += PIBperCapita2;
            break;
        case 6:
            printf("Super poder\n");
            printf("(%s) %.2f x %.2f (%s)\n", name1, superPower1, superPower2, name2);
            if (superPower1 == superPower2) {
                printf("Os atributos são iguais");
            } else if (superPower1 > superPower2) {
                printf("Cidade 1 (%s) ganhou esse atributo", name1);
            } else {
                printf("Cidade 2 (%s) ganhou esse atributo", name2);
            }
            city1Sum += superPower1;
            city2Sum += superPower2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }
    printf("\nResultado final das somas dos atributos: Cidade 1 (%s) %.2f x %.2f (%s) Cidade 2\n\n", name1, city1Sum, city2Sum, name2);
    if (city1Sum == city2Sum) {
        printf("Empate!\n");
    } else if (city1Sum > city2Sum) {
        printf("Cidade 1 (%s) ganhou!\n", name1);
    } else {
        printf("Cidade 2 (%s) ganhou!\n", name2);
    }
    printf("#################################\n");

    return 0;
}
