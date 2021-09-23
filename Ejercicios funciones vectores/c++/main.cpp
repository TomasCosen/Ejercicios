#include <iostream>
#include <windows.h>


using namespace std;
int buscarmaximo(int lista[], int t);
int buscarminimo(int listb[], int j);
float promedio(int listc[], int r);
void matrizsuma(int matriza[3][3], int matrizb[3][3]);
void matrizescalar(int matriza[3][3], int escalar);


int main()
{
    int resultado, opcion, sino, resultadob, escalar;
    float resultadoc;
    int numeros[4] = {1, 2, 27, 7}, matriza[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, matrizb[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    do{
        system("cls");
        cout << "1 - Buscar numero maximo" << endl;
        cout << "2 - Buscar numero minimo" << endl;
        cout << "3 - Sacar el promedio" << endl;
        cout << "4 - Sumar matrices" << endl;
        cout << "5 - Multiplicar matriz escalar" << endl;
        cout << "6 - Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch (opcion){
        case 1:
            resultado = buscarmaximo(numeros, 4);
            cout << "el maximo numero es: " << resultado << endl;
            system("pause");
            return main();
        case 2:
            resultadob = buscarminimo(numeros, 4);
            cout << "el minimo numero es: " << resultadob << endl;
            system("pause");
            return main();
        case 3:
            resultadoc = (promedio(numeros, 4));
            cout << "el promedio de numeros es: " << resultadoc << endl;
            system("pause");
            return main();
        case 4:
            matrizsuma(matriza, matrizb);
            system("pause");
            return main();
        case 5:
            matrizescalar(matriza, escalar);
            system("pause");
            return main();
        case 6:
            cout << "Seguro que quieres salir?" << endl;
            cout << "1 - SI" << endl;
            cout << "2 - NO" << endl;
            cin >> sino;
            if (sino == 1){
                return 0;
            }
            else{
                return main();
            }
            break;
        }
    }while(opcion != 6);
}

int buscarmaximo(int lista[], int t){
    int maxi= -80000, i;
    for (i = 0; i < t; i++){
        if (lista[i] > maxi){
            maxi = lista[i];
        }
    }
    return maxi;
}

int buscarminimo(int listb[], int j){
    int mini = 80000, i;
    for (i = 0; i < j; i++){
        if (listb[i] < mini){
            mini = listb[i];
        }
    }
    return mini;
}

float promedio(int listc[], int r){
    int acumulador =0, contador=0, i ;
    float resultadoprom;
    for (i =0; i < r; i++){
        acumulador += listc[i];
        contador++;
    }
    resultadoprom = float(acumulador)/contador;
    return resultadoprom;
}
void matrizsuma(int matriza[3][3], int matrizb[3][3]){
int matrizr[3][3];
int i, j;
for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        matrizr[i][j] = 0;
        matrizr[i][j] = matriza[i][j] + matrizb [i][j];
        cout << "la sumatoria de las matrices es: " << "(" << i << "," << j << ")" << matrizr[i][j] << endl;
    }
}
return;
}

void matrizescalar(int matriza[3][3], int escalar){
int matrizr[3][3];
int i, j;
cout << "Valor de la constante escalar: ";
cin >> escalar;
for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
        matrizr[i][j] = 0;
        matrizr[i][j] = matriza[i][j] * escalar;
        cout << "el producto de la matriz es: " << "(" << i << "," << j << ")" << matrizr[i][j] << endl;
    }
}
return;
}
