#include <stdio.h>
#define MAX_ARRAY 999999

/*
void troca5 (int s[5]) {
    int s2[5];
    int x = 0,t=4;
    for(x=0;x != 5;x++) {
        s2[x]=s[x];
    }
    for (int x = 0; x != 5 ; x++) {
        s[x]=s2[t];
        t--;
    }
    for (x=0; x != 5; x++)
        printf("%d",s[x]);
    printf("\n");
}

//2

 void media()
int n,x=0;
printf("coloque o tamanho dos arrays\n");
float media=0;
scanf("%d",&n);
int s[n],s2[n];
printf("coloque a primeira sequencia\n");
for(x;x != n; x++) {
scanf("%d",&s[x]);
}
//media
for(x=0;x != n;x++) {
media=s[x] + media;
}
media = media/n;
int i=0;
for(x=0; x<n ; x++) {
if (s[x] > media) {
s2[i]=s[x];
i++;
}
}
for(x=0 ; x < i ; x++)
printf("%d ",s2[x]);
printf("\n");
}


//3
int main () {
   char s[MAX_ARRAY];
   char s2[MAX_ARRAY];
    int in,i,tamanho;
   printf("coloque a primeira string\n");
   scanf("%s",&s);

   printf("coloque a segunda string\n");
   scanf("%s",&s2);
//ve o tamanho pra depois subtrair pra encontrar o indice
   for(tamanho=0;s2[i] != NULL;i++){tamanho++;}
   tamanho;
  for(in=i=0;s2[i]!=NULL;in++) {
      if (s[in] == NULL) return -1;

      else if (s[in] == s2[i]) i++;
      }
  tamanho=in-tamanho;
while (s[tamanho] != NULL) {
    printf("%c",s[tamanho]);
    tamanho++;
}
printf("\n");
    return 0;

}
 */

//1
void soma_elemento(int *arr, int dim, int idx) {
    int in;
    int h=arr[idx];
    for(in=0;in<dim;in++) {
        arr[in]+=h;
    }
    for(in=0;in<dim;in++){
        printf("%d ",arr[in]);
    }

}
//2
void roda_esq(int *arr, int dim, int shifter) {
    int aux[dim]; int in,i,p,x;
    for(in=0;in<dim ; in++) {
        aux[in] = arr[in];
    }
    for(in=0;in<dim;in++) {

            p=in-shifter;
            if (p<0) {
            x=dim+p;
            arr[x]=aux[in]; }
            else arr[p]=aux[in];
    }
    for(in=0;in<dim;in++){
        printf("%d ",arr[in]);
    }

}
//3
void swap (int v[],int a,int b) {
    int t = v[a];
    v[a] = v[b];
    v[b] = t;
}
void minisort (int v[],int N) {
    int i,m,j;
    for(i=0;i < N;i++) {
        for(j=i+1 ;j < N;j++) {
            if (v[j] > v[i]){
                m = j;
            swap(v,i,m);}
    }
} }
int remove_menores(int *arr, int dim, int valor){
int tamanho=0,in;

for(in=0;in < dim;in++) {
    if (arr[in] > valor) tamanho++;
}
minisort(arr,dim);

for(int i=0;i < dim;i++) {

printf("%d",arr[i]);}

printf("\n");

printf("%d",tamanho);
return tamanho;
}
