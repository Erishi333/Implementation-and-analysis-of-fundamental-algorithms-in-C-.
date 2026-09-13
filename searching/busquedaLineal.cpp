#include <vector>

using namespace std;

int busquedaLineal(const vector<int>& arreglo, int objetivo) {
    for (int indice = 0; indice < arreglo.size(); indice++) {
        if (arreglo[indice] == objetivo) {
            return indice;
        }
    }

    return -1;
}