//Cadenas_03 -----------------(página 56 presentación)-----------------------------------------------

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
