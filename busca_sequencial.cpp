#include "busca.h"

int busca(const int* arr, int tamanho, int chave) {
    int posicao = 0;
    do{
        if(chave == arr[posicao]){
            return posicao;
        }
        posicao = posicao + 1;
    } while (posicao < tamanho);
    return -1;
}