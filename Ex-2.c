#include<stdio.h>

/*

2. Implemente uma fun��o que receba como par�metro um vetor de n�meros reais (vet) de tamanho n e
retorne quantos n�meros negativos est�o armazenados neste vetor. Esta fun��o deve obedecer ao
prot�tipo:

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


