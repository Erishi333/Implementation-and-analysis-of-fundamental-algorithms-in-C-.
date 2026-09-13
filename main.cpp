#include <iostream>
#include <vector>

using namespace std;

// Busqueda
int busquedaLineal(const vector<int>& arreglo, int objetivo);
int busquedaBinaria(const vector<int>& arreglo, int objetivo);

// Ordenamiento
void ordenamientoBurbuja(vector<int>& arreglo);
void ordenamientoSeleccion(vector<int>& arreglo);
void ordenamientoInsercion(vector<int>& arreglo);

// Utilidades
void mostrarArreglo(const vector<int>& arreglo);

int main() {
    vector<int> numeros = {64, 25, 12, 22, 11};

    cout << "===== CPP ALGORITHM LAB =====\n\n";

    cout << "Arreglo original:\n";
    mostrarArreglo(numeros);

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

    int objetivo = 22;

    cout << "\nBusqueda lineal de " << objetivo << ":\n";

    int resultadoLineal = busquedaLineal(numeros, objetivo);

    if (resultadoLineal != -1) {
        cout << "Encontrado en el indice: "
             << resultadoLineal << endl;
    } else {
        cout << "Elemento no encontrado.\n";
    }

    cout << "\nBusqueda binaria de " << objetivo << ":\n";

    int resultadoBinario = busquedaBinaria(insercion, objetivo);

    if (resultadoBinario != -1) {
        cout << "Encontrado en el indice: "
             << resultadoBinario << endl;
    } else {
        cout << "Elemento no encontrado.\n";
    }

    return 0;
}