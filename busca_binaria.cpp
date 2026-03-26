#include "busca.h"

int busca(const int* arr, int tamanho, int chave){
    int inicio = 0, fim = tamanho -1, meio;
    while(inicio<= fim){
        meio = (inicio+fim)/2;
        if(chave > arr[meio]){
            fim = meio-1;
        } else if (chave > arr[meio]){
            inicio = meio-1;
        } else {
            return meio;
        }
    }
    return-1;
}