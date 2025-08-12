
#include<stdio.h>
#include<stdlib.h>

/*
4. Fazer um programa que leia dez n�meros e escreva-os na ordem contr�ria � ordem de leitura. Exemplo:
l�: 7 40 3 9 21 0 63 31 7 22
escreve: 22 7 31 63 0 21 9 3 40 7
Use aloca��o din�mica. O programa deve ser estruturado nas seguintes fun��es:

a. Main: aloca o vetor e faz a leitura do vetor
b. Fun��o 1: escreve o vetor na ordem contr�ria
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
int n = 10;
int valores_iniciais[] = {7, 40, 3, 9, 21, 0, 63, 31, 7, 22};

vet = (int *) malloc(n*sizeof(int));

for(int i = 0; i<n; i++){
    vet[i] = valores_iniciais[i];
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
