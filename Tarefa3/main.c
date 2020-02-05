#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a, b, c, area,s;
    printf("Coloque os valores dos lados.\n");
    scanf("%f %f %f",&a,&b,&c);
    if (abs(b-c)<a &&  a<(b+c)) {
        printf("estes 3 lados podem formar um triângulo\n");
        if (a == b &&  b == c) printf("este triangulo e equilatero\n");
        else if (a == b || b == c || a == c) printf("este triangulo e Isósceles\n");
        else printf("este triangulo e Escaleno\n");

        s=((a+b+c)/2);
        area = sqrt( s * (s-a) * (s-b) * (s-c));
        printf("A area deste triangulo e = %f\n",area);
    }
    else printf("estes 3 lados não podem formar um triângulo\n");
    return 0;
}


