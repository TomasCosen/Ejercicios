#include <iostream>

using namespace std;

int main()
{
    int numeroA, indice;
int negativos=0, ceros = 0, positivos = 0;

    for(indice = 0 ; indice< 10; indice ++)
{
cout << " ingrese un numero " << endl;
cin >> numeroA;
if (numeroA < 0)
{
negativos++ ;
}

if (numeroA == 0)
{
ceros++ ;
}

if (numeroA > 0)
{
positivos++ ;
}

}

cout << "positivos" << positivos << endl;
cout << "negativos"<< negativos<< endl;
cout << "ceros" << ceros << endl;

    return 0;
}
