#include <stdio.h>

int main () {

// VARIAVEIS CARTA 1   
    
    char estado1[20], cidade1[20], codigo1[10];
    
    unsigned long int população1;
    
    int pontosturisticos1;
    
    float area1, densidade1;
    
    double pib1, pibpercap1;
    
    long double SuperPoder1;

    // VARIAVEIS CARTA 2

    char estado2[20], cidade2[20], codigo2[10];
    
    unsigned long int população2;
    
    int pontosturisticos2;
    
    float area2, densidade2; 
    
    double pib2, pibpercap2;

    long double SuperPoder2;

// SISTEMA DE CADASTRO DA CARTA 1
     
    printf("   SISTEMA DE CADASTRO DE CARTAS (CARTA 1) \n\n"); //TITULO DO SISTEMA DE CADASTRO
    
    printf("DIGITE O NOME DO ESTADO: ");
    fgets(estado1, 20, stdin);
    
    printf("DIGITE O CODIGO DA CARTA: ");
    scanf("%s", codigo1);
    
    printf("DIGITE O NOME DA CIDADE: ");
    scanf("%*c");                                  // LIMPA BUFFER DO ENTER
    fgets(cidade1, 20, stdin);
    
    printf("DIGITE O NUMERO DE HABITANTES: ");
    scanf("%ld", &população1);
    
    printf("AREA DA CIDADE EM QUILOMETROS QUADRADOS: ");
    scanf("%f", &area1);
   
    printf("DIGITE O VALOR DO PRODUTO INTERNO BRUTO (PIB): ");
    scanf("%lf", &pib1);
    
    printf("DIGITE A QUANTIDADE DE PONTOS TURISTCOS: ");
    scanf("%d", &pontosturisticos1);

    // mutiplicando o valor do pib pra chegar no valor em bilhões
     pib1 = pib1 * 1000000000.0;
    
    //Calculando Densidade Populacional e PIB per Capita da Carta 1
    densidade1 =  população1 / area1;
    pibpercap1 = (double) pib1 / população1;

    //Calculando a soma do super poder 
    SuperPoder1 = (long double) população1 + area1 + pib1 + 
    pontosturisticos1 + densidade1 + pibpercap1;
    
    printf("\n\n"); // PULAR UMA LINHA PRA ORGANIZAÇÃO DA IMPRESSÃO
    
//IMPRESSÃO DA CARTA 1
    printf(" CARTA: 1 \n\n");
    printf(" Estado: %s ", estado1);
    printf("Codigo: %s \n", codigo1);
    printf(" Cidade: %s", cidade1);
    printf(" População: %ld \n", população1);
    printf(" Area: %.2f km² \n", area1);            
    printf(" PIB: %.2f bihões de reais \n", pib1 / 1000000000.0);  //divisão do valor RJ pra abreviar o valor na impressão
    printf(" Numero de pontos turisticos: %d \n", pontosturisticos1);
    printf(" Densidade Populacional: %.2f hab/km \n", densidade1);
    printf(" PIB per capita: %.2lf Reais \n", pibpercap1);
    printf(" Super Poder: %.Lf \n\n", SuperPoder1);

    // SISTEMA DE CADASTRO DA CARTA 2
    
    printf("   SISTEMA DE CADASTRO DE CARTAS (CARTA2 ) \n\n"); //TITULO DO SISTEMA DE CADASTRO
    
    scanf("%*c");                                  // LIMPA BUFFER DO ENTER
    printf("DIGITE O NOME DO ESTADO: ");
    fgets(estado2, 20, stdin);
    
    printf("DIGITE O CODIGO DA CARTA: ");
    scanf("%s", codigo2);
    
    printf("NOME DA CIDADE: ");
    scanf("%*c");                                // LIMPA BUFFER DO ENTER
    fgets(cidade2, 20, stdin);
    
    printf("DIGITE O NUMERO DE HABITANTES: ");
    scanf(" %ld", &população2);
    
    printf("AREA DA CIDADE EM QUILOMETROS QUADRADOS: ");
    scanf("%f", &area2);
    
    printf("DIGITE O VALOR DO PRODUTO INTERNO BRUTO (PIB): ");
    scanf(" %lf", &pib2);
    
    printf("DIGITE A QUANTIDADE DE PONTOS TURISTCOS: ");
    scanf("%d", &pontosturisticos2);

    // mutiplicando o valor do pib pra chegar no valor em bilhões
    
    pib2 = pib2 * 1000000000.0;
    
    //Calculando Densidade Populacional e PIB per Capita da Carta 2 
    densidade2 =  população2 / area2;
    pibpercap2 = (double) pib2 / população2;
    
    //Calculando a soma do super poder 
    SuperPoder2 = (long double) população2 + area2 + pib2 + 
    pontosturisticos2 + densidade2 + pibpercap2;
    
        printf("\n\n"); // PULAR UMA LINHA PRA ORGANIZAÇÃO DA IMPRESSÃO

//IMPRESSÃO DA CARTA 2
    printf(" CARTA: 2 \n\n");
    printf(" Estado: %s ", estado2);
    printf("Codigo: %s \n", codigo2);
    printf(" Cidade: %s", cidade2);
    printf(" População: %ld \n", população2);
    printf(" Area: %.2f km² \n", area2);            
    printf(" PIB: %.2f bilhões de reais \n", pib2 / 1000000000.0);  //divisão pra abeviar o valor na impressão
    printf(" Numero de pontos turisticos: %d \n", pontosturisticos2);
    printf(" Densidade Populacional: %.2f hab/km \n", densidade2);
    printf(" PIB per capita: %.2lf Reais \n", pibpercap2);
    printf(" Super Poder: %.Lf \n\n", SuperPoder2);

    // Comparação das cartas usando a estrutura de decisão if-else

    if (população1 > população2)
    {
        printf("A população da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("A população da Carta 2 (Rio de janeiro) venceu!\n");
    }
    
    if (area1 > area2)
    {
        printf("Area da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Area da Carta 2 (Rio de janeiro) venceu!\n");
    }
    
    if (pib1 > pib2)
    {
        printf("PIB da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("PIB da Carta 2 (Rio de janeiro) venceu!\n");
    }    

    if (pontosturisticos1 > pontosturisticos2)
    {
        printf("Pontos Turisticos da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Pontos Turisticos da Carta 2 (Rio de janeiro) venceu\n");
    }    

    
    if ( densidade1 < densidade2)
    {
        printf("A densidade populacional da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("A densidade populacional da Carta 2 (Rio de janeiro) venceu\n");
    }    
    
    if (pibpercap1 > pibpercap2)
    {
         printf("O PIB Percap da Carta 1 (São Paulo) venceu!\n");
    }  else {
        printf("O PIB Percap da Carta 2 (Rio de janeiro) venceu\n");
    }

    if (SuperPoder1 > SuperPoder2)
    {
         printf("O super poder da Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("O super poder da Carta 2 (Rio de janeiro) venceu\n\n");
    }
    

    //Declaração de variaveis dos resultados das comparações das cartas
    
    int Resultado1, Resultado2,
    Resultado3, Resultado4, Resultado5, Resultado6,
    Resultado7;
    
    printf(" COMPARAÇÃO DAS CARTAS \n\n");

    Resultado1 = população1 > população2;
    Resultado2 = area1 > area2;
    Resultado3 = pib1 > pib2; 
    Resultado4 = pontosturisticos1 > pontosturisticos2;
    Resultado5 = densidade1 < densidade2;
    Resultado6 = pibpercap1 > pibpercap2;
    Resultado7 = SuperPoder1 > SuperPoder2;

    printf("População: Carta 1 Venceu (%d) \n", Resultado1);
    printf("Area: Carta 1 Venceu (%.d) \n", Resultado2);
    printf("Pib: Carta 1 Venceu (%d) \n", Resultado3);
    printf("Pontos turisticos: Carta 1 Venceu (%d) \n", Resultado4);
    printf("Densidade Populacional: Carta 2 Venceu (%d) \n", Resultado5);
    printf("Pib Per capita: Carta 1 Venceu (%d) \n", Resultado6);
    printf("Super Poder: Carta 1 Venceu (%.d)\n\n", Resultado7);       



    


    



return 0;
   
}
