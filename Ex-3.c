#include<stdio.h>
#include<stdlib.h>

/*
Implemente uma função que receba como parâmetro um vetor de números inteiros (vet) de tamanho
n e inverta a ordem dos elementos armazenados neste vetor. Esta função deve obedecer ao protótipo:

void inverte (int n, int *vet)
Use alocação dinâmica. O valor de n é informado pelo usuário.
*/

void inverte (int n, int *vet){
int aux;

        for(int i = 0; i < n / 2; i++){
        aux = vet[i];
        vet[i] = vet[n - 1 - i];
        vet[n-1-i] = aux;
        }

}



int main(){

int *vet;
int n;

scanf("%d",&n);
vet = (int *) malloc(n*sizeof(int));

for(int i = 0; i<n; i++){
    vet[i] = i * i;
}
for(int i = 0; i < n; i++) {
    printf("%d ", vet[i]);
}
printf("\n");
inverte(n,vet);

for(int i = 0; i < n; i++) {
    printf("%d ", vet[i]);
}
printf("\n");
free(vet);
}
