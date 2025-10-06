#include <stdio.h>

        int main (){

        char estado1 [20];
        char codigo1 [4];
        char cidade1 [20];
        unsigned long int populacao1;
        int pontosTuristicos1;
        float area1;
        float pib1;
        float densidadePopulacional1;
        float pibperCapita1;

        printf("====== CADASTRO DAS CARTAS ======\n");
        printf("\n--------------------------------------------------\n");

        
        printf("\n(CARTA 1) - \n");

        printf("Digite seu Estado:\n");
        scanf("%s", estado1);

        printf("Digite o Código:\n");
        scanf("%s", codigo1);

        printf("Digite sua Cidade:\n");
        scanf("%s", cidade1);

        printf("Digite sua População:\n");
        scanf("%lu", &populacao1);

        printf("Digite a quantidade de Pontos Turísticos:\n");
        scanf("%d", &pontosTuristicos1);

        printf("Digite sua Área:\n");
        scanf("%f", &area1);

        printf ("Digite seu PIB:\n");
        scanf("%f", &pib1);

        densidadePopulacional1 = populacao1 / area1;
        pibperCapita1 = (pib1 * 1000000000) / populacao1;

        printf("\nCidade:%s\n", cidade1);
        printf("Estado:%s\n", estado1);
        printf("Código:%s\n", codigo1);
        printf("População:%lu habitantes\n", populacao1);
        printf("Área:%.2f km²\n", area1);
        printf("Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("PIB:%.2f bilhões\n", pib1);
        printf("Densidade Populacional:%.2f hab/km²\n", densidadePopulacional1);
        printf("PIB per Capita:R$ %.2f\n", pibperCapita1);

        











        return 0;
    }