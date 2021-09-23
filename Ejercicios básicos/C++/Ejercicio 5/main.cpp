#include <iostream>

using namespace std;

int main()
{

int indice, contador =0;

double promedio, temperatura, acumulador;

for(indice = 0 ; indice < 10; indice ++)
{
cout << " ingrese un numero " << endl;
cin >> temperatura;

if (temperatura > 5 && temperatura <15)
{
acumulador += temperatura;
contador++;
}


}




promedio = double (acumulador)/contador;
          //cast estatico
cout << "promedio de temperatura " << promedio;

return 0;
}
