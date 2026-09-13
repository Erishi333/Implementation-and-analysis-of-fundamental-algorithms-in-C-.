#include <vector>
#include <utility>

using namespace std;

void ordenamientoSeleccion(vector<int>& arreglo) {
    int cantidad = arreglo.size();

    for (int i = 0; i < cantidad - 1; i++) {
        int indiceMenor = i;

        for (int j = i + 1; j < cantidad; j++) {
            if (arreglo[j] < arreglo[indiceMenor]) {
                indiceMenor = j;
            }
        }

        if (indiceMenor != i) {
            swap(arreglo[i], arreglo[indiceMenor]);
        }
    }
}