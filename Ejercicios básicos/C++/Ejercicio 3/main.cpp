#include <iostream>

using namespace std;

int main()
{
    int numeroA, acumulador = 0, contador =0;
    double promedio;

    do
{
cout << " ingrese un numero " << endl;
cin >> numeroA;


///acumulador = acumulador + numeroA;
acumulador += numeroA ;
contador++;

}while (numeroA != 0);


promedio = double (acumulador)/contador;
        //cast estatico
cout << "promedio" << promedio;

    return 0;
}
