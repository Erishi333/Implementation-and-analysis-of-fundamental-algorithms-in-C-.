#include <vector>

using namespace std;

int busquedaBinariaRecursiva(
    const vector<int>& arreglo,
    int objetivo,
    int izquierda,
    int derecha
) {
    if (izquierda > derecha) {
        return -1;
    }

    int medio = izquierda + (derecha - izquierda) / 2;

    if (arreglo[medio] == objetivo) {
        return medio;
    }

    if (arreglo[medio] < objetivo) {
        return busquedaBinariaRecursiva(
            arreglo,
            objetivo,
            medio + 1,
            derecha
        );
    }

    return busquedaBinariaRecursiva(
        arreglo,
        objetivo,
        izquierda,
        medio - 1
    );
}