#include <vector>
#include <iostream>

int calcularMedia(int v[], int tamanho);
int somaRecursiva(int v[], int tamanho)

int main(){
    int tamanho;

    std::cout << "Quantos numeros voce deseja inserir";
    std::cin >> tamanho;

    if (tamanho <= 0){
        std::cout << "O tamanho deve ser maio que zero" << std::endl;
        return 1;
    }

    int* v = new int[tamanho];

    std::cout << "Digite os " << tamanho << " numeros:\n";
    for (int i = 0; i < tamanho; i++){
        std::cout << "Elemento " << i+1 << ": ";
        std::cin >> v[i];
    }
    int media = calcularMedia(v,tamanho);

    std::cout << "\nA media aritmetica calculada e: " << media << std::endl;

    delete[] v;

    return 0;
}
int somaRecursiva(int v[], int tamanho){
    if (tamanho <= 0) {
        return 0;
    }
    return v[n-1] + somaRecursiva(v, n-1);
}

int calcularMedia(int v[], int tamanho){
    if (tamanho <= 0){
        return 0;
    }

    int somatotal = somaRecursiva(int v[], tamanho);
    return somatotal / tamanho;
}