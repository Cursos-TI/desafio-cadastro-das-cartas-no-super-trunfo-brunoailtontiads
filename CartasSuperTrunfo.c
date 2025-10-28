#include <stdio.h>

int main(){

    // Variáveis da carta 1
    char estado1;
    char codigo1[50];
    char cidade1[50]; 
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float capita1;
    float superPoder1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[50];
    char cidade2[50]; 
    unsigned long int populacao2;
    float area2;
    float pib2; 
    int pontos2;
    float densidade2;
    float capita2;
    float superPoder2;

    printf("\n*** CADASTRO DAS CARTAS ***\n\n");

    // Carta 1
    printf("Digite o estado (letra): carta 1\n");
    scanf(" %c", &estado1);
    printf("Digite o código: carta 1\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: carta 1\n");
    scanf("%s", cidade1);
    printf("Digite a quantidade da população: carta 1\n");
    scanf("%lu", &populacao1);
    printf("Digite o tamanho da área: carta 1 \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões): carta 1\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: carta 1\n");
    scanf("%d", &pontos1); 

    printf("\n*** Agora preencha a carta 2 ***\n\n");

    // Carta 2
    printf("Digite o estado (letra): carta 2\n");
    scanf(" %c", &estado2);
    printf("Digite o código: carta 2\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: carta 2\n");
    scanf("%s", cidade2);
    printf("Digite a quantidade da população: carta 2\n");
    scanf("%lu", &populacao2);
    printf("Digite o tamanho da área: carta 2 \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões): carta 2\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: carta 2\n");
    scanf("%d", &pontos2);

    // Cálculos automáticos
    densidade1 = populacao1 / area1;
    capita1 = (pib1 * 1000000000) / populacao1;
    densidade2 = populacao2 / area2;
    capita2 = (pib2 * 1000000000) / populacao2;

    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos1 + capita1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos2 + capita2 + (1 / densidade2);

    // Exibição das cartas
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, densidade1, capita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, capita2);

    // Menu interativo
    int opcao;
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    switch(opcao){
        case 1:
            printf("Comparando População:\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);

            if(populacao1 > populacao2)
                printf("Vencedora: %s\n", cidade1);
            else if(populacao2 > populacao1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if(area1 > area2)
                printf("Vencedora: %s\n", cidade1);
            else if(area2 > area1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bi\n", cidade1, pib1);
            printf("%s: %.2f bi\n", cidade2, pib2);

            if(pib1 > pib2)
                printf("Vencedora: %s\n", cidade1);
            else if(pib2 > pib1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);

            if(pontos1 > pontos2)
                printf("Vencedora: %s\n", cidade1);
            else if(pontos2 > pontos1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Demográfica (menor vence):\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);

            if(densidade1 < densidade2)
                printf("Vencedora: %s\n", cidade1);
            else if(densidade2 < densidade1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Comparando PIB per Capita:\n");
            printf("%s: %.2f\n", cidade1, capita1);
            printf("%s: %.2f\n", cidade2, capita2);

            if(capita1 > capita2)
                printf("Vencedora: %s\n", cidade1);
            else if(capita2 > capita1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Comparando Super Poder:\n");
            printf("%s: %.2f\n", cidade1, superPoder1);
            printf("%s: %.2f\n", cidade2, superPoder2);

            if(superPoder1 > superPoder2)
                printf("Vencedora: %s\n", cidade1);
            else if(superPoder2 > superPoder1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número entre 1 e 7.\n");
            break;
    }

    printf("\n=============================\n");

    return 0;
}
