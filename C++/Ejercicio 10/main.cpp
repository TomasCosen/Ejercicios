#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float A, B, C, x1, x2, discr, caso2, xr;
    cout << "ingrese el numero A: " << endl;
    cin >> A;
    cout << "ingrese el numero B: " << endl;
    cin >> B;
    cout << "ingrese el numero C: " << endl;
    cin >> C;
    discr = pow(B, 2) - (4*A*C);
    cout << "El discriminante es: " << discr << endl;
    if (discr > 0){
        x1 = ((B* -1) + (sqrt(discr))) / (2*A);
        x2 = ((B* -1) - (sqrt(discr))) / (2*A);
        cout << "Las raíces son distintas: " << endl;
        cout << "X1 es: " << x1 << endl;
        cout << "X2 es: " << x2 << endl;
    }
    if (discr ==  0){
        caso2 = (B* -1) / (2*A);
        cout << "Las raíces valen lo mismo y es: " << caso2 << endl;
    }
    if (discr < 0){
        xr = (B * -1) / (2 * A);
        cout << "Las raíces son complejas conjugadas, hay parte real e imaginaria" << endl;
        cout << "La parte real es: " << xr << endl;

    }

}
