#include <iostream>

int main(){
    int n;
    int a[] = {5, 1, 4, 2, 8};
    
    for (int i = 0; i < (n-1); i++){
    int min_i = i;
    for (int j = i + 1; j < n; j++){
        if (a[min_i] < a[j]){
            min_i = j;
        }
    }
    std::swap (a[i], a[min_i]);
    std::cout << a[n] << std::endl;
}

}
