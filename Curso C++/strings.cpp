#include <iostream>

using namespace std;

int main()
{
    string name = "Pepe pecas";
    cout << "Pepe pecas pica papas" << endl;
    cout << name << " pica papas" << endl;
    // Puedes obtener el tamano del string
    cout << name.length() << endl;
    // Puebes obtener por caracteres
    cout << name[0] << endl;
    // Puedes buscar contenido y obtener el indice de donde empieza
    cout << name.find("pecas", 0) << endl;
    // Imprimir una seccion especifica apartir del tamano y el indice
    // El primer 5 es donde empieza y el segundo es el tamano
    cout << name.substr(5, 5) << endl;
    return 0;
}