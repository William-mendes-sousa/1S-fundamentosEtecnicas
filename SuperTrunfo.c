#include <stdio.h>

int main () {

// VARIAVEIS CARTA 1   
    
    char estado1[20], cidade1[20], codigo1[10];
    int população1, pontosturisticos1, carta1;
    float pib1, area1, densidade1, pibpercap1 ;
   
// VARIAVEIS CARTA 2

    char  estado2[20], cidade2[20], codigo2[10];
    int  população2, pontosturisticos2;
    float  pib2, area2, densidade2, pibpercap2 ;

// SISTEMA DE CADASTRO DA CARTA 1
     
    printf("   SISTEMA DE CADASTRO DE CARTAS \n\n"); //TITULO DO SISTEMA DE CADASTRO
    
    printf("DIGITE O NOME DO ESTADO: ");
    fgets(estado1, 20, stdin);
    
    printf("DIGITE O CODIGO DA CARTA: ");
    scanf("%s", codigo1);
    
    printf("DIGITE O NOME DA CIDADE: ");
    scanf("%*c");                                  // LIMPA BUFFER DO ENTER
    fgets(cidade1, 20, stdin);
    
    printf("DIGITE O NUMERO DE HABITANTES: ");
    scanf(" %d", &população1);
    
    printf("AREA DA CIDADE EM QUILOMETROS QUADRADOS: ");
    scanf("%f", &area1);
   
    printf("DIGITE O VALOR DO PRODUTO INTERNO BRUTO (PIB): ");
    scanf(" %f", &pib1);
    
    printf("DIGITE A QUANTIDADE DE PONTOS TURISTCOS: ");
    scanf("%d", &pontosturisticos1);
    
    //Calculando Densidade Populacional e PIB per Capita da Carta 1
    densidade1 = população1 / area1;
    pibpercap1 = (float) pib1 / população1;
    
    printf("\n\n"); // PULAR UMA LINHA PRA ORGANIZAÇÃO DA IMPRESSÃO
    
//IMPRESSÃO DA CARTA 1
    printf(" CARTA: 1 \n\n");
    printf(" Estado: %s ", estado1);
    printf("Codigo: %s \n", codigo1);
    printf(" Cidade: %s", cidade1);
    printf(" População: %d \n", população1);
    printf(" Area: %.2f km² \n", area1);            
    printf(" PIB: %.2f bilhões de reais \n", pib1);
    printf(" Numero de pontos turisticos: %d \n", pontosturisticos1);
    printf(" Densidade Populacional: %.2f hab/km \n", densidade1);
    printf(" PIB per capita: %.2f \n\n", pibpercap1);
// SISTEMA DE CADASTRO DA CARTA 2
    
    printf("   SISTEMA DE CADASTRO DE CARTAS \n\n"); //TITULO DO SISTEMA DE CADASTRO
    
    scanf("%*c");                                  // LIMPA BUFFER DO ENTER
    printf("DIGITE O NOME DO ESTADO: ");
    fgets(estado2, 20, stdin);
    
    printf("DIGITE O CODIGO DA CARTA: ");
    scanf("%s", codigo2);
    
    printf("NOME DA CIDADE: ");
    scanf("%*c");                                // LIMPA BUFFER DO ENTER
    fgets(cidade2, 20, stdin);
    
    printf("DIGITE O NUMERO DE HABITANTES: ");
    scanf(" %d", &população2);
    
    printf("AREA DA CIDADE EM QUILOMETROS QUADRADOS: ");
    scanf("%f", &area2);
    
    printf("DIGITE O VALOR DO PRODUTO INTERNO BRUTO (PIB): ");
    scanf(" %f", &pib2);
    
    printf("DIGITE A QUANTIDADE DE PONTOS TURISTCOS: ");
    scanf("%d", &pontosturisticos2);
    
    //Calculando Densidade Populacional e PIB per Capita da Carta 2 
    densidade2 = população2 / area2;
    pibpercap2 = pib2 / população2;
    
    printf("\n\n"); // PULAR UMA LINHA PRA ORGANIZAÇÃO DA IMPRESSÃO

//IMPRESSÃO DA CARTA 2
    printf(" CARTA: 2 \n\n");
    printf(" Estado: %s ", estado2);
    printf("Codigo: %s \n", codigo2);
    printf(" Cidade: %s", cidade2);
    printf(" População: %d \n", população2);
    printf(" Area: %.2f km² \n", area2);            
    printf(" PIB: %.2f bilhões de reais \n", pib2);
    printf(" Numero de pontos turisticos: %d \n\n", pontosturisticos2);
    printf(" Densidade Populacional: %.2f hab/km \n", densidade2);
    printf(" PIB per capita: %.2f \n\n", pibpercap2);



return 0;
   
}
