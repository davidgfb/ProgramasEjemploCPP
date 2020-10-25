Vectores_01 -----------------(página 51 presentación)-----------------------------------------------

#include <iostream>

using namespace std;

int main()
{
    const int tam_v=10, filas=5, columnas=3;
    int v[tam_v]={1,2,3,4,5};
    int m[5][3]={   {33,21,47},
                    {82,91,95},
                    {50,72,45},
                    {36,79,63},
                    {53,60,74} };

    int k[4][6]; 

    cout << "Vector v: ";
    for(int i=0;i<tam_v;i++)
    {
    cout << " "<< v[i];
    }

    cout << endl << endl << "Matriz m: " << endl;
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            cout << " " << m[i][j];
        }
        cout << endl;
    }

    cout << endl << endl << "Matriz k: " << endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout << " " << k[i][j];
        }
        cout << endl;
    }

    return 0;
}

Cadenas_01 -----------------(página 52 presentación)-----------------------------------------------


#include <iostream>

using namespace std;

int main()
{
    char Nombre[30];

    cout << "Escriba su nombre completo: ";
    cin >> Nombre;
    cout << endl << "Su nombre completo es: " << Nombre;

    return 0;
}

Cadenas_02 -----------------(página 54 presentación)-----------------------------------------------

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

Cadenas_03 -----------------(página 56 presentación)-----------------------------------------------

#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    //Cadenas de caracteres como vectores
    char str1[]="presionante";
    char str2[40];
    char str3[40];

    strcpy (str2,"im");
    strcat (str2,str1);
    strcpy (str3,"copy successful");

    cout << "Cadenas de caracteres como vectores:" << endl << endl;
    cout << "im+presionante = "<<str2<<endl;
    cout << "str3: "<<str3<<endl;
    cout << "La longitud de str3 es de "<<strlen (str3)<<" caracteres"<<endl;

    switch(strcmp ("abcd","abcc"))
    {

      case 0:  cout<<"Las cadenas 'abcd' y 'abcc' son iguales"<<endl; break;
      case 1:  cout<<"'abcd' es mayor que 'abcc'"<<endl; break;
      case -1:  cout<<"'abcd' es menor que 'abcc'"<<endl; break;
    }

    //Cadenas de caracteres tipo string
    string cadena1,cadena2,cadena3;

    cout << endl << "Cadenas de caracteres tipo string:" << endl << endl;
    cadena1="Las cadenas de tipo string";
    cadena2=" son mas comodas de utilizar que los vectores de caracteres.";
    cout<<cadena1+cadena2<<endl;

    cout << endl << "Introduce una frase con espacios en blanco:" << endl;
    cin >> cadena3;
    cout << endl<< cadena3 << endl;

//    cout << endl << "Introduce una frase con espacios en blanco:" << endl;
//    getline (cin, cadena3);
//    cout << endl<< cadena3 << endl;

  return 0;
}

Punteros_01  ----------------------------------------------------------------
Programa que permite acceder al contenido de una variable y conocer la dirección en la que se almacena dicho contenido. Además se muestra la diferencia entre copiar un valor en otra variable y en crear un alias.

#include <iostream>

using namespace std;

int main()
{
    int n=75;
    int m=n;
    int& r=n; //con la declaración int& se indica que r es un alias de n

    cout << "n = " << n << ", m = " << m << ", r = " << r << endl << endl;
    cout << "&n = " << &n <<", " << "&m = " << &m << endl << endl;
    cout << "&n = " << &n <<", " << "&r = " << &r << endl << endl;

    return 0;
}

Punteros_02  ----------------------------------------------------------------
Programa que utiliza punteros a entero y a carácter. Muestra los contenidos de las variables de dichos tipos así como el contenido de los punteros a las variables y las direcciones en que se almacenan éstos.

#include <iostream>

using namespace std;

int main()
{
    int n=75;
    int* p = &n;  //p es un puntero de tipo entero que contiene la dirección de n
    char c='A';
    char* pc=&c;

    cout << "n = " << n << ", &n = " << &n << endl << endl;
    cout << "p = " << p << ", &p = " << &p << endl << endl;
    cout << "c = " << c << ", &c = " << &c << endl << endl; //necesaria conversión explícita de tipos (int*) &c
    cout << "pc = " << pc << ", &pc = " << &pc << endl << endl;

    return 0;
}

Punteros_03  ----------------------------------------------------------------
Programa que utiliza punteros a punteros a varios niveles.

#include <iostream>

using namespace std;

int main()
{
    char c = 'z'; //inicialización estática de punteros
    char* pc = &c;
    char** ppc = &pc;
    char*** pppc = &ppc;

    cout << "c = " << c << endl;

    cout << "&pppc = " << &pppc << ", pppc = " << pppc << endl;
    cout << "&ppc = " << &ppc << ", ppc = " << ppc << endl;
    cout << "&pc = " << &pc  << ", pc = " << (int**)pc << endl;
    cout << "&c = " << (int*)&c  << ", c = " << c << endl << endl;

    cout << "Accedemos al contenido de c a traves del puntero pppc: " << ***pppc << endl << endl;

    cout << "Asignamos ***pppc = 'q'" << endl;
    ***pppc = 'q';
    cout << "c = " << c  << endl;

    return 0;
}

Punteros_04  ----------------------------------------------------------------
Programa que utiliza punteros a cadenas de caracteres.

#include <iostream>

using namespace std;


int main()
{
    char alfabeto[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p;

    p=&alfabeto[0];
    cout << *p << *(p+1) << *(p+2) << endl;

    for(int i=0;i <= 26; i++)
       cout << *(p+i);
    cout << endl;

    p=&alfabeto[15];
    cout << *p << endl;

    p=alfabeto;
    cout << *(p+9) << endl;

    return 0;
}

Punteros_05  ----------------------------------------------------------------
Programa que utiliza punteros a cadenas de caracteres y operadores incrementales.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    unsigned int i=0;
    char cadena1[] = "Esto es una cadena de caracteres";
    char cadena2[42] = "Esto es un puntero a cadena de caracteres";
    char* ptr;

    ptr = &cadena2[0];

    cout << "cadena1[0]= " << cadena1[0] << endl;
    cout << "*ptr= " << *ptr << endl;

    cout << "1: " << endl;
    for(i=0;i<strlen(cadena1);i++)
    {
        cout << cadena1[i];
    }

    cout << endl << "2: " << endl;
    for(i=0;i<42;i++)
    {
        cout << *(ptr+i);
    }

    cout << endl << "3: " << endl;
    while (*ptr) cout << *ptr++;

    cout << endl;
    return 0;
}


Estructuras_01  -----------------(página 65 presentación)-----------------------------------------------
Programa que utiliza una estructura para almacenar datos relativos a un estudiante. Permite insertar datos en la estructura y acceder a los mismos.

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

Estructuras_02  -----------------(página 66 presentación)-----------------------------------------------
Programa que muestra diversas formas de acceder al contenido de una estructura.

#include <iostream>

using namespace std;

int main()
{
    struct Hora
    {
        int hh;
        int mm;
        int ss;
    };

    Hora h,v[10],*p;

    h.hh=8;
    v[3].hh=5;
    p=&h;

    cout << p->hh <<" "<< h.hh <<" "<< v[3].hh;

    return 0;
}

Estructuras_03  ----------------------------------------------------------------
Programa que utiliza una estructura para almacenar datos relativos a un estudiante. Muestra formas válidas y erróneas de inicializar e insertar datos en una estructura. 

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
