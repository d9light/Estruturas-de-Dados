#include<stdio.h>
#include<stdlib.h>
/*
Implemente uma função que receba como parâmetro uma matriz de inteiros de tamanho m x
n (alocada dinamicamente como um vetor simples) e imprima na tela os elementos
armazenados nesta matriz. Esta função deve obedecer ao protótipo:
void imprime_matriz (int m, int n, int* mat)

*/

void imprime_matriz (int m, int n, int* mat){


    for(int i= 0 ; i < m; i++){
        for(int j = 0; j < n; j++ ){
            printf("[%d] [%d]", i , j);
            printf("%d", mat[i *n + j]);
            printf("\n");
        }
    }

}




int main() {
    int m = 2, n = 2;
    int* mat = malloc(m * n * sizeof(int));

    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){

            mat[i * n + j] = (i + j) *2;


        }


    }

    imprime_matriz(m, n, mat);

    free(mat);
    return 0;
}

