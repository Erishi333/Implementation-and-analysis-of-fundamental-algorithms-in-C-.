#include <vector>

using namespace std;

void ordenamientoInsercion(vector<int>& arreglo) {
    int cantidad = arreglo.size();

    for (int i = 1; i < cantidad; i++) {
        int elemento = arreglo[i];
        int j = i - 1;

        while (j >= 0 && arreglo[j] > elemento) {
            arreglo[j + 1] = arreglo[j];
            j--;
        }

        arreglo[j + 1] = elemento;
    }
}