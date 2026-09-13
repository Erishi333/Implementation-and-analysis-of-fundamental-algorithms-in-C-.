#include <iostream>
#include <vector>

using namespace std;

// ==================== BUSQUEDA ====================

int busquedaLineal(const vector<int>& arreglo, int objetivo);
int busquedaBinaria(const vector<int>& arreglo, int objetivo);

int busquedaBinariaRecursiva(
    const vector<int>& arreglo,
    int objetivo,
    int izquierda,
    int derecha
);

// ==================== ORDENAMIENTO ====================

void ordenamientoBurbuja(vector<int>& arreglo);
void ordenamientoSeleccion(vector<int>& arreglo);
void ordenamientoInsercion(vector<int>& arreglo);

// ==================== UTILIDADES ====================

void mostrarArreglo(const vector<int>& arreglo) {
    for (int numero : arreglo) {
        cout << numero << " ";
    }

    cout << endl;
}

// ==================== PROGRAMA PRINCIPAL ====================

int main() {

    vector<int> numeros = {64, 25, 12, 22, 11};

    cout << "===== CPP ALGORITHM LAB =====\n\n";

    cout << "Arreglo original:\n";
    mostrarArreglo(numeros);

    // ---------- ORDENAMIENTO ----------

    vector<int> burbuja = numeros;
    ordenamientoBurbuja(burbuja);

    cout << "\nOrdenamiento por burbuja:\n";
    mostrarArreglo(burbuja);

    vector<int> seleccion = numeros;
    ordenamientoSeleccion(seleccion);

    cout << "\nOrdenamiento por seleccion:\n";
    mostrarArreglo(seleccion);

    vector<int> insercion = numeros;
    ordenamientoInsercion(insercion);

    cout << "\nOrdenamiento por insercion:\n";
    mostrarArreglo(insercion);

    // ---------- BUSQUEDA ----------

    int objetivo = 22;

    cout << "\nBusqueda lineal de " << objetivo << ":\n";

    int resultadoLineal = busquedaLineal(numeros, objetivo);

    if (resultadoLineal != -1) {
        cout << "Encontrado en el indice "
             << resultadoLineal << endl;
    } else {
        cout << "Elemento no encontrado.\n";
    }

    cout << "\nBusqueda binaria de " << objetivo << ":\n";

    int resultadoBinario = busquedaBinaria(insercion, objetivo);

    if (resultadoBinario != -1) {
        cout << "Encontrado en el indice "
             << resultadoBinario << endl;
    } else {
        cout << "Elemento no encontrado.\n";
    }

    // ---------- BUSQUEDA BINARIA RECURSIVA ----------

    cout << "\nBusqueda binaria recursiva de "
         << objetivo << ":\n";

    int resultadoRecursivo = busquedaBinariaRecursiva(
        insercion,
        objetivo,
        0,
        insercion.size() - 1
    );

    if (resultadoRecursivo != -1) {
        cout << "Encontrado en el indice "
             << resultadoRecursivo << endl;
    } else {
        cout << "Elemento no encontrado.\n";
    }

    return 0;
}