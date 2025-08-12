/*Parte 1: Funções simples:

1. Implemente uma função que indique se um ponto (x,y) está localizado dentro ou fora de um
retângulo. O retângulo é definido por seus vértices inferior esquerdo (x0,y0) e superior direito
(x1,y1). A função deve ter como valor de retorno 1, se o ponto estiver dentro do retângulo, e 0 caso
contrário, obedecendo ao protótipo:

int dentro_ret (int x0, int y0, int x1, int y1, int x, int y)*/

#include <stdio.h>

int dentro_ret (int x0, int y0, int xl, int yl, int x, int y){

    if( x >= x0 && x<=xl){
      if(y >= y0 && y<=yl){

         printf("Esta dentro!");
            return 1;

        }
    }else{
        printf("Esta Fora!");
        return 0;
    }
}




int main(){

int x0 = -20;
int y0 = -10;
int xl = 30;
int yl = 40;
int x = 5;
int y = 25;

int result = dentro_ret( x0,  y0,  xl,  yl,  x,  y);
}
