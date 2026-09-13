#include <vector>

using namespace std;

int busquedaBinaria(const vector<int>& arreglo, int objetivo) {
    int izquierda = 0;
    int derecha = arreglo.size() - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arreglo[medio] == objetivo) {
            return medio;
        }

        if (arreglo[medio] < objetivo) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    return -1;
}