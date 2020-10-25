//Estructuras_02  -----------------(página 66 presentación)-----------------------------------------------
//Programa que muestra diversas formas de acceder al contenido de una estructura.

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
