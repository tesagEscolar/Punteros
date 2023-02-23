#include <iostream>

using namespace std;

void leerArreglo(int *arreglo, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i << " del arreglo: ";
        cin >> *(arreglo + i);
    }
}

void burbuja(int *arr, int n){
  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - i - 1; j++)
      if (*(arr + j) > *(arr + j + 1)) 
        *(arr + j)^=*(arr + j + 1)^(*(arr + j + 1)=*(arr + j));
}

void imprimirArreglo(int arr[]) {
    for (int i = 0; arr[i]; i++)
        cout << arr[i] << ", ";
    cout<<endl;
}

int main() {
     int arreglo[10];
     leerArreglo(arreglo, 10);
     cout<<"Arreglo Original: ";
     imprimirArreglo(arreglo);
     burbuja(arreglo, 10);
     cout<<"Arreglo Ordenado: ";
     imprimirArreglo(arreglo);
     return 0;
 }
