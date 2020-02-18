#include <stdio.h>
#include "indicadores.h"
#include <assert.h>
int main() {
 float peso, altura, indice;
 printf("Indique o seu peso (em Kg): ");
 scanf("%f",&peso);
 printf("Indique a sua altura (em m): ");
 scanf("%f",&altura);
 indice = imc(peso, altura);
 assert((peso>40 && peso<130 && altura>1.4 && altura<2) && "Erro");
 printf("O valor do seu IMC é: %f\n", indice);
 if(indice<=16) printf("Muito abaixo do peso\n");
 else if (indice>16 && indice<=19) printf("abaixo do peso\n");
 else if (indice>19 && indice<=25) printf("peso normal\n");
 else if (indice>25 && indice<=30) printf("excesso de peso\n");
 else if (indice>30 && indice<=35) printf("obesidade\n");
 else printf("super obesidade\n");
}
