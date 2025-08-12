#include<stdio.h>
#include<stdlib.h>

float *alocaMemoria (int n){
    float *vet_aloca;
    vet_aloca = (float *) malloc(n*sizeof(float));
    return vet_aloca;
}

void leituraVetor(int n, float *vet){
    // Adicionado o print para solicitar os números
    printf("Agora, digite os %d numeros reais:\n", n);
    for(int i = 0; i<n; i++){
        scanf("%f",&vet[i]);
    }
}

float calculaMedia(int n, float *vet){
    float media = 0;
    for(int i= 0; i < n; i++){
        media += vet[i];
    }
    media = media/n;
    return media;
}

float maioresMedia(float media, int n, float *vet){
    int cont = 0;
    float maiores;
    for(int i = 0; i<n; i++){
        if(vet[i]> media){
            cont++;
        }
    }
    maiores = (cont/(float)n) * 100;
    return maiores;
}

int main(){
    float *vet;
    int n;
    float media;
    float porcem;

    printf("Digite a quantidade de numeros que deseja analisar: ");
    scanf("%d",&n);

    vet = alocaMemoria(n);
    leituraVetor(n,vet);

    media = calculaMedia(n , vet);
    porcem = maioresMedia(media, n, vet);

    printf("\nA media dos valores eh: %.2f\n", media);
    printf("O percentual de valores maiores que a media eh: %.2f%%\n", porcem);

    free(vet);
    return 0;
}
