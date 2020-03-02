#include <stdio.h>
void imprime_triangulo(int num) {
    char ch = 'A';
    int i, j, k, m;
    for (i = 1; i <= num; i++) {
        for (j = num;j >= i;j--)
            printf(" ");
        for (k = 1;k <= i;k++)
            printf("%c",ch++);
        ch--;
        for (m = 1;m < i;m++)
            printf("%c",--ch);
        printf("\n");
        ch = 'A';
    }
}
void imprime_losango(int num){
    char ch = 'A';
    int i, j, k, m;
    for (i = 1; i <= num; i++) {
        for (j = num;j >= i;j--)
            printf(" ");
        for (k = 1;k <= i;k++)
            printf("%c",ch++);
        ch--;
        for (m = 1;m < i;m++)
            printf("%c",--ch);
        printf("\n");
        ch = 'A';
    } //2 parte
    int u=j+2;
    for (i; i > 0; i--) {
        for (j=u; j > i; j--)
            printf(" ");
        for (k = i;k >= 1;k--)
            printf("%c",ch++);
        ch--;
        for (m = i;m >1;m--)
            printf("%c",--ch);
        printf("\n");
        ch = 'A';
    }
}


void imprime_hexagono(int n) {
    int len = 2 * n - 1;
    for (int i = 0; i < n; i++) {
        int temp = i + n;
        for (int k = 0; k < temp; k++) {
            if ((k == n + i - 1) || (k == n - i - 1))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int m = 0; m < n - 2; m++) {
        for (int j = 0; j < len; j++) {
            if (j == 0 || j == len - 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    int res = n - 1;
    for (int h = res; h >= 0; h--) {
        int temp2 = h + n;
        for (int k = 0; k < temp2; k++) {
            if ((k == n + h - 1) || (k == n - h - 1))
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}