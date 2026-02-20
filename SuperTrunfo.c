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
    
    int pontosturisticos2, propriedade;
    
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

    printf("### Escolha uma propriedade pra comparação ###\n\n");
    printf("1. Poulação\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade demografica\n");
    printf("Propriedade escolhida:");
    scanf("%d", &propriedade);

    printf("\n");

     switch (propriedade)
    {
     case 1:
        if (população1 == população2) 
        {
            printf ("Nimguem vence");
        } else if (população1 > população2)
        {
            printf("Carta 1 vence! São paulo tem a maior população com %ld habitantes\n\n", população1);
        } else {
            printf("Carta 2 Vence! Rio de janeiro tem a maior população com %ld habitantes\n\n", população2);
        }
        break; 
     case 2:
        if (area1 == area2) 
        {
            printf ("Nimguem vence\n\n");
        } else if (area1 > area2)
        {
            printf("Carta 1 vence! São Paulo tem maior area com %.2f km²\n\n", area1);
        } else {
            printf("Carta 2 Vence! Rio de janeiro tem maior area com %.2f km²\n\n", area2);
        }
        break;    
     case 3:
        if (pib1 == pib2) 
        {
            printf ("Nimguem vence\n\n");
        } else if (pib1 > pib2)
        {
            printf("Carta 1 vence! São Paulo tem maior PIB com %.2f bilhões\n\n", pib1);
        } else {
            printf("Carta 2 Vence! Rio de janeiro tem maior PIB com %.2f bilhões\n\n", pib2);
        }
        break; 
     case 4:
        if (pontosturisticos1 == pontosturisticos2) 
        {
            printf ("Nimguem vence\n\n");
        } else if (pontosturisticos1 > pontosturisticos2)
        {
            printf("Carta 1 vence! São Paulo tem mais pontos turisticos com %d\n\n", pontosturisticos1);
        } else {
            printf("Carta 2 Vence! Rio de janeiro tem mais pontos turisticos com %d\n\n", pontosturisticos2);
        }
        break;             
     case 5:
        if (densidade1 == densidade2) 
        {
            printf ("Nimguem vence\n\n");
        } else if (densidade1 < densidade2)
        {
            printf("Carta 1 vence! São Paulo tem maior Densidade populacional com %.2f  hab/km\n\n", densidade1);
        } else {
            printf("Carta 2 Vence! Rio de janeiro tem maior Densidade populacional com %.2f  hab/km\n\n", densidade2);
        }
        break;      
     default: {
        printf("opção invalida\n\n");
        }
        break;  
    

    }




return 0;
   
}
