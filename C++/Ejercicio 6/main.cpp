#include <iostream>

using namespace std;

int main()
{
    int numeroA, maximo=0, minimo =0;

    do
    {
        cout << " ingrese un numero " << endl;
        cin >> numeroA;
        if (numeroA > maximo)
        {
            maximo = numeroA;
        }
        if (numeroA < minimo)
        {
            minimo = numeroA;
        }

    }while (numeroA != 0);

    cout << "el numero mas alto es " << maximo << endl;
    cout << "el numero mas bajo es " << minimo << endl;




}
