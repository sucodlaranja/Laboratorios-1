#include <stdio.h>
#include <stdlib.h>
#include "geradorvezes.h"
#include "soma.h"
#include "subtrair.h"
#include "divisao.h"
void ge (int m) {
    if (m==1) printf("Óptimo!\n");
    if (m==2) printf("Belo trabalho!\n");
    if (m==0) printf("continue assim!\n");
}
void err (int n) {
    if (n==1) printf("Errado, tente novamente.\n");
        if (n==2) printf("Não desista!\n");
            if (n==0) printf("Não, tente mais uma vez.\n");
}


int main() {
    int x,z,m,h,k;
    int n=1;
    printf("bem-vindo ao programa de contas de 3 niveis\nPara contas de somar prima 1\nPara contas de subtraçâo pra 2\nPara contas de multiplicação prima 3\nPara contas de dividir prima 4\n");
    scanf("%d",&k);
    while(n<4) {
        m=rand()%3;
        if (k==4) z=divisao(n);
        if (k==2) z=subtrair(n);
        if (k==1) z=soma(n);
        if (k==3) z=gera(n);
        scanf("%d",&x);
        while(x!=z){
            h=rand()%3;
            err(h);
            scanf("%d",&x);
        }
        ge(m);
        n++;
    }
    printf("Excelente, concluiu o pograma.");
    return 0;
}
