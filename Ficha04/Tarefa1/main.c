#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "opcionais.h"
int main() {
    int tarefa,dim,valor;
    printf("Qual e a pergunta?\n1-soma elemento\n2-roda esquerda\n3-remove menores\n");
    scanf("%d",&tarefa);
    assert((tarefa>=1 && tarefa<=3) && "erro, numero de tarefa nao encontrada");
    printf("coloque a dimensao\n");
    scanf("%d",&dim);
    printf("coloque o valor\n");
    scanf("%d",&valor);
    printf("coloque o array\n");
    int arr[dim];
    for(int i=0;i<dim;i++) {
    scanf("%d",&arr[i]); }

        switch(tarefa) {
            case 1: soma_elemento(arr,dim,valor); break;
            case 2: roda_esq(arr,dim,valor); break;
            case 3: remove_menores(arr,dim,valor); break;
        }
    return 0;
}