#include <stdio.h>

int main (){

    char estado1;
    char codigo1 [4];
    char nomeCidade1 [20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    float densidadePopulacional1;
    float pibperCapita1;
    int pontosTuristicos1;

    char estado2;
    char codigo2 [4];
    char nomeCidade2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    float densidadePopulacional2;
    float pibperCapita2;
    int pontosTuristicos2;

    printf("CADASTRO DAS CARTAS\n");
    printf("-----------------------------------------\n");
    printf("\n====AMAZONAS====\n");

    printf("\nDigite o seu Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o Código:\n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", nomeCidade1);

    printf("Digite a sua População:\n");
    scanf("%lu", &populacao1);

    printf("Digite sua Área em km²:\n");
    scanf("%f", &area1);

    printf("Digite seu PIB:\n");
    scanf("%f", &pib1);

    printf("Digite seus Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (float)populacao1 / area1;
    pibperCapita1 = (pib1 * 1000000000) / populacao1;



    printf("\n====BRASILIA====\n");

    printf("\nDigite a sua Cidade:\n");
    scanf(" %c", &estado2);

    printf("Digite o Código:\n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", nomeCidade2);

    printf("Digite a sua População:\n");
    scanf("%lu", &populacao2);

    printf("Digite sua Área em km²:\n");
    scanf("%f", &area2);

    printf("Digite seu PIB:\n");
    scanf("%f", &pib2);

    printf("Digite seus Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float)populacao2 / area2;
    pibperCapita2 = (pib2 * 1000000000) / populacao2;

    printf("====CARTA 1=====\n");

    printf("Cidade: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nomeCidade1);
    printf("População: %lu", populacao1);
    printf("Área em Km²: %.2f\n", area1);
    printf("PIB em bilhões de reais: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional em hab/km²: %.2f\n", densidadePopulacional1);
    printf("Pib Per Capita em reais: %.2f\n", pibperCapita1);


    printf("\n-----------------------------------------\n");

    printf("====CARTA 2=====\n");

    printf("Cidade: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nomeCidade2);
    printf("População: %lu", populacao2);
    printf("Área em Km²: %.2f\n", area2);
    printf("PIB em bilhões de reais: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional em hab/km²: %.2f\n", densidadePopulacional2);
    printf("Pib Per Capita em reais: %.2f\n", pibperCapita2);

    printf("\n------------------------------------------------------------------\n");

    printf("====== COMPARAÇÃO DAS CARTAS ======\n");
    //Atributo escolhido: População

    if (populacao1 > populacao2)
    {
        printf("Carta 1 - (AMAZONAS) (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1)
    {
        printf("Carta 2 - (BRASILIA) (%s) venceu!\n", nomeCidade2);
    } else{

        printf("Empate!\n");
    }
    
    

    



    return 0;
}