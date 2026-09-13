#include <vector>
#include <utility>

using namespace std;

void ordenamientoBurbuja(vector<int>& arreglo) {
    int cantidad = arreglo.size();

    for (int i = 0; i < cantidad - 1; i++) {
        bool intercambio = false;

        for (int j = 0; j < cantidad - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                swap(arreglo[j], arreglo[j + 1]);
                intercambio = true;
            }
        }

        if (!intercambio) {
            break;
        }
    }
}