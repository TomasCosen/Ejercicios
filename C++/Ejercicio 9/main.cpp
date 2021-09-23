#include <iostream>

using namespace std;

int main()
{
    int m1 = 0, b1 = 0, m2 = 0, b2 = 0, DG1 = 0, DG2 = 0;
    int n1 = 0, n2 = 0, DG = 0, Dx = 0, Dy = 0, dx1 = 0, dx2 = 0, dy1 = 0, dy2 = 0;
    double x = 0, y = 0;
    cout << "ingrese pendiente recta A" << endl;
    cin >> m1;
    cout << "ingrese ordenada al origen recta A" << endl;
    cin >> b1;
    cout << "ingrese el termino independiente recta A" << endl;
    cin >> n1;
    cout << "ingrese pendiente recta B" << endl;
    cin >> m2;
    cout << "ingrese ordenada al origen recta B" << endl;
    cin >> b2;
    cout << "ingrese el termino independiente recta B" << endl;
    cin >> n2;
    //determinante general
    DG1 = (m1 * b2);
    DG2 = (b1 * m2);
    DG = (DG1 - DG2);
    //determinante de X
    dx1 = (n1 * b2);
    dx2 = (b1 * n2);
    Dx = (dx1 - dx2);
    //determinante de Y
    dy1 = (m1 * n2);
    dy2 = (m2 * n1);
    Dy = (dy1 - dy2);
    //X
    x = double (Dx/DG);
    //Y
    y = double (Dy/DG);



    if (m1 == m2){
        cout << "no hay interseccion entre las rectas" << endl;
    }
    cout << "eje x " << x << endl;
    cout << "eje y " << y << endl;

    cout << "Determinante general" << DG << endl;
    cout << "Determinante de X" << Dx << endl;
    cout << "Determinante de Y" << Dy << endl;

}
