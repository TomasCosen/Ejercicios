#include <iostream>

using namespace std;

int main()
{
    bool flag= false;
    int numero, contadorpromedio =0, minimo=0, contadornumero=0, cantidadnumeros=0;
    double acumulador=0, promedio=0;

    do
{
        cout << " ingrese un numero " << endl;
        cin >> numero;
        contadornumero++;
        if (numero > 0){
            if (numero <= 18 && numero >= 9)
            {
                acumulador += numero;
                contadorpromedio++;
            }
            if (minimo == 0)
            {
                minimo = numero;

            }
            if (numero < minimo)
            {
                minimo = numero;
            }
            if (numero == 8)
            {
                flag = true;
            }
            if (flag == true)
            {
                cantidadnumeros++;
            }
        }
    }while (numero != 0);
    cantidadnumeros--;
    promedio = double (acumulador)/contadorpromedio;
    cout << "promedio" << promedio << endl;
    cout << "el menor valor registrado es de" << minimo << endl;
    cout << "la cantidad de numeros despues del 8 es de" << cantidadnumeros << endl;

}
