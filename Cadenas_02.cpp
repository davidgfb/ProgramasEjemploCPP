//Cadenas_02 -----------------(página 54 presentación)-----------------------------------------------

#include <iostream>

using namespace std;

int main()
{
    char Nombre[20];

    cout << "Escriba su nombre completo: ";
    cin.getline(Nombre, 20);
    cout << endl << "Su nombre completo es: " << Nombre;

    return 0;
}
