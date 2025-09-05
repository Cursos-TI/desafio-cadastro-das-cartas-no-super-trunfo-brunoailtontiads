#include <stdio.h>

int main(){
 
    //espaço
    printf("\n");
 
    //variável carta 1
    char estado1;
    char codigo1[50];
    char cidade1[50]; 
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float capita1;


    //variável carta 2
    char estado2;
    char codigo2[50];
    char cidade2[50]; 
    int populacao2;
    float area2;
    float pib2; 
    int pontos2;
    float densidade2;
    float capita2;

    // carta 1 
    printf("Digite o estado: carta 1\n");
    scanf("%c", &estado1);

    printf("Digite o código: carta 1\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: carta 1\n");
    scanf("%s", cidade1);

    printf("Digite a quantidade da população: carta 1\n");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da área: carta 1 \n");
    scanf("%f", &area1);

    printf("Digite o pib da cidade: carta 1\n");
    scanf("%f",&pib1);

    printf("Digite a quantidade de pontos turisticos: carta 1\n");
    scanf("%d", &pontos1); 

    

    
    
    printf("          ***Agora preencha a carta 2***\n\n");
    

    
    // carta 2 
    printf("Digite o estado: carta 2\n");
    scanf(" %c", &estado2);

    printf("Digite o código: carta 2\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: carta 2\n");
    scanf("%s", cidade2);

    printf("Digite a quantidade da população: carta 2\n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área: carta 2 \n");
    scanf("%f", &area2);

    printf("Digite o pib da cidade: carta 2\n");
    scanf("%f",&pib2);

    printf("Digite a quantidade pontos turisticos: carta 2\n");
    scanf("%d", &pontos2);

    //Fórmula 1
    densidade1 = (populacao1 / area1);
    capita1 = (pib1 * 1000000000 / populacao1);
    
    //Fórmula 2
    densidade2 = (populacao2 / area2);
    capita2 = (pib2 * 1000000000 / populacao2);
    
    // carta 1
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("Pib: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turístícos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n",densidade1);
    printf("Pib per capita: %.2f reais\n", capita1);
   
    
    
    // carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("Pib: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turístícos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n",densidade2);
    printf("Pib per capita: %.2f reais\n", capita2);
    
    





}