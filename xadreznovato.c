#include <stdio.h>

int main(){

    //Peça Bispo 

    //Mover bispo 5 casas para direita e para cima
    for (int bispo = 0; bispo <= 5; bispo++){
        printf("Diagonal superior a direita\n"); // printar o movimento do bispo
    }

// Peça Torre

       //Mover a torre 5 vezes para cima
       int torre = 1;

       do {
           printf(" torre para cima\n", torre); //printar o movimento da torre
       torre++;
       } while (torre <= 5);

//Peça Rainha
       // Mover a rainha 8 vezes para a esquerda
       int rainha = 1;

       while (rainha <= 8) {
           printf("Rainha a esquerda %d\n", rainha); //printar o movimento da Rainha
           rainha++;
       }
   
    return 0;
}