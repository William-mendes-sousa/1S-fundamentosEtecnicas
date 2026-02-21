#include <stdio.h>

int main () {

// VARIAVEIS CARTA 1   
    
    char estado1[20] = ("SP"), cidade1[20] = ("SaoPaulo"), codigo1[10] = ("A01");
    int população1 = 12325000;
    
    int pontosturisticos1 = 50; 
    
    float area1 = 1521.11, densidade1 = 8102.47;
    
    double pib1 = 699.28, pibpercap1 = 56724.32;
    
    long double SuperPoder1;

    // VARIAVEIS CARTA 2

    char estado2[20], cidade2[20], codigo2[10];
    
    unsigned long int população2;
    
    int pontosturisticos2, propriedade;
    
    float area2, densidade2; 
    
    
   //Calculando a soma do super poder 
    SuperPoder1 = (long double) população1 + area1 + pib1 + 
    pontosturisticos1 + densidade1 + pibpercap1;
    
    printf("\n\n"); // PULAR UMA LINHA PRA ORGANIZAÇÃO DA IMPRESSÃO
    
    //IMPRESSÃO DA CARTA 1
    printf(" CARTA: 1 \n\n");
    printf(" Estado: %s\n ", estado1);
    printf("Codigo: %s \n", codigo1);
    printf(" Cidade: %s\n", cidade1);
    printf(" População: %d \n", população1);
    printf(" Area: %.2f km² \n", area1);            
    printf(" PIB: %.2f bihões de reais \n", pib1 / 1000000000.0);  //divisão do valor RJ pra abreviar o valor na impressão
    printf(" Numero de pontos turisticos: %d \n", pontosturisticos1);
    printf(" Densidade Populacional: %.2f hab/km \n", densidade1);
    printf(" PIB per capita: %.2lf Reais \n", pibpercap1);
    printf(" Super Poder: %.Lf \n\n", SuperPoder1);

    

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
            printf("Carta 1 vence! São paulo tem a maior população com %d habitantes\n\n", população1);
        } else {
            printf("Carta 2 Vence! Rio de janeiro tem a maior população com %d habitantes\n\n", população2);
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
            printf("Carta 1 vence! São Paulo tem menor densidade populacional com %.2f  hab/km\n\n", densidade1);
        } else {
            printf("Carta 2 Vence! Rio de janeiro tem menor densidade populacional com %.2f  hab/km\n\n", densidade2);
        }
        break;      
     default: {
        printf("opção invalida\n\n");
        }
        break;  
    

    }




return 0;
   
}
