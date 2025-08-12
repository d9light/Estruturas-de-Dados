#include<stdio.h>

/*

2. Implemente uma função que receba como parâmetro um vetor de números reais (vet) de tamanho n e
retorne quantos números negativos estão armazenados neste vetor. Esta função deve obedecer ao
protótipo:

*/

#define TAM 5


int contNegativo(int vet[]){

int cont = 0 ;

for(int i=0; i < TAM; i++){

    if(vet[i]< 0){
        cont++;
    }
}
    return cont;
}


int main(){



int vet[TAM] = {1,-2,-3,4,5};



int teste = 0;

teste = contNegativo(vet);
printf("%d", teste);

}


