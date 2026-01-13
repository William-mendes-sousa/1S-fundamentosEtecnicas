#include <stdio.h>

     int main (){

     char ProdutoA [20]= "produto A";
     char produtoB [20]= "produto B";

     unsigned int estoqueA = 1000;
     unsigned int estoqueB = 2000;

     float valorA = 10.50;
     float valorB = 10.40;

     unsigned int estoqueMinimoA = 500;
     unsigned int estoqueMinimoB = 2500;

     double valorTotalA;
     double valorTotalB;

     int ResultadoA, ResultadoB;
     
     printf(" produto %s - estoque %u - valor Unitario R$ %.2f\n ", ProdutoA, estoqueA, valorA);
     printf("produto %s - estoque %u - valor Unitario R$ %.2f\n\n ", produtoB, estoqueB, valorB);

     ResultadoA = estoqueA > estoqueMinimoA;
     ResultadoB = estoqueB > estoqueMinimoB;

     printf("O produto %s tem estoque minimo %d\n", ProdutoA, ResultadoA);
     printf(" O produto %s tem estoque minimo %d\n\n", produtoB, ResultadoB);

     printf("O valor total em estoque do produto A (R$ %.2f) é maior que o valor total em estoque do produto B (R$ %.2f)? %d\n\n",  
        estoqueA * valorA, 
        estoqueB * valorB,  
        (estoqueA * valorA) > (estoqueB * valorB));


    return 0;

}