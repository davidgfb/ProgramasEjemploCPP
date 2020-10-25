//Vectores_01 -----------------(página 51 presentación)-----------------------------------------------

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
