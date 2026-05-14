#include <iostream>
#include <stack>

using namespace std;

int main () {

    stack <string> caminhos;

    //push(); = adiciona elemento ao topo da pilha;
    caminhos.push("Erudição");
    caminhos.push("Euforia");
    caminhos.push("Recordação");
    caminhos.push("Inexistencia");

    //empty(); = verifica se uma pilha esta vazia;
    if (caminhos.empty()){
        cout << "Pilha vazia\n\n";
    } else {
        cout << "Pilha com elementos\n\n";
    }

    //outra maneira de verificar se uma pilha esta vazia é utilizando o size();
    //if (caminhos.size() == 0){
        //cout << "Pilha vazia\n\n";
    //} else {
        //cout << "Pilha com elementos\n\n";
    //}

    cout << "Tamanho da pilha: " << caminhos.size() << "\n";

    cout << "Caminhos do topo: " << caminhos.top() << "\n";

    //pop(); = remove o elemento do topo da pilha;
    caminhos.pop();

    cout << "Novo caminhos do topo: " << caminhos.top() << "\n";

    return 0;
}