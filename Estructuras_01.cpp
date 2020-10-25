//Estructuras_01  -----------------(página 65 presentación)-----------------------------------------------
//Programa que utiliza una estructura para almacenar datos relativos a un estudiante. Permite insertar datos en la estructura y acceder a los mismos.

#include <iostream>

using namespace std;

struct estudiante
{
    string nombre;  
    int numEstudiante;
    float nota;
};

int main()
{
    estudiante alumno;

    cout << "Introduzca el nombre del estudiante: " << endl;
    getline(cin,alumno.nombre);   
    cout << "Introduzca el numero de estudiante: " << endl;
    cin >> alumno.numEstudiante;
    cout << "Introduzca la calificacion: " << endl;
    cin >> alumno.nota;

    cout << alumno.nombre  << " " << alumno.numEstudiante  << " " << alumno.nota ;

    return 0;
}
