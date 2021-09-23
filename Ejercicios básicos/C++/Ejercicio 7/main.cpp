#include <iostream>

using namespace std;

int main()
{
    int contadormediciones =0, contadorpromedio =0, maximo=0;
    double temperatura =0, acumulador =0, promedio =0;

     do
{
        cout << " ingrese una temperatura " << endl;
        cin >> temperatura;
        contadormediciones++;

        if (temperatura <= 30 && temperatura >= 10)
        {
            acumulador += temperatura;
            contadorpromedio++;
        }
        if (maximo == 0)
        {
            maximo = temperatura;

        }
        if (maximo < temperatura)
        {
            maximo = temperatura;
        }

    }while (temperatura != -100);
    contadormediciones--;
    promedio = double (acumulador)/contadorpromedio;
    cout << "la cantidad de mediciones ingresadas son" << contadormediciones << endl;
    cout << "el maximo valor registrado es de" << maximo << endl;
    cout << "promedio" << promedio << endl;




}
