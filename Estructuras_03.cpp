//Estructuras_03  ----------------------------------------------------------------
//Programa que utiliza una estructura para almacenar datos relativos a un estudiante. Muestra formas válidas y erróneas de inicializar e insertar datos en una estructura. 

#include <iostream>

#include <stdio.h>
#include <string.h>


using namespace std;


struct estudiante
{
    char nombre[30];
    int numEstudiante;
    float nota;
    string otrosDatos;
};

int main()
{
    estudiante nadie={" ",0,0," "};
    estudiante manolo={"Manuel Perez",2345,9.57,"Alumno inventado"};
    estudiante pepe;
    estudiante *alumno;
    alumno=&nadie;

    cout << "Introduzca el nombre del estudiante: " << endl;
    gets(alumno->nombre);
    cout << "Introduzca el numero de estudiante: " << endl;
    cin >> alumno->numEstudiante;
    cout << "Introduzca la calificacion: " << endl;
    cin >> alumno->nota;
    cout << "Introduzca otros datos de interes: " << endl;
    fflush(stdin);
    getline(cin,alumno->otrosDatos);

    cout << alumno->nombre << " " << alumno->numEstudiante << " " << alumno->nota << " " << alumno->otrosDatos << endl;
    cout << manolo.nombre << " " << manolo.numEstudiante << " " << manolo.nota << " " << manolo.otrosDatos << endl;

    //pepe={"Jose Torralba Gomez",3254,7.7}; // Da error
    //pepe.nombre="Jose Gomez   "; //Da error
    strcpy(pepe.nombre,"Jose Gomez");
    pepe.numEstudiante=3254;
    pepe.nota=7.7;
    cout << pepe.nombre << " " << pepe.numEstudiante << " " << pepe.nota << endl;

    //Pero al usar tipos string, las operaciones con cadenas de caracteres son más sencillas
    pepe.otrosDatos="alumno excelente";
    cout << pepe.otrosDatos << endl;

    return 0;
}
