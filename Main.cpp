#include "Frac.h"

int main()
{
    cout << "FRACTION : " << endl;
    Fraction ps1;
    Fraction ps2;
    cout << "Input fraction 1 : " << endl;
    ps1.Input();
    ps1.Output();
    cout << "Input fraction 2 : " << endl;
    ps2.Input();
    ps2.Output();
    cout << "Sum of fraction: " << endl;
    (ps1.Addition(ps2)).Output();
    cout << "Subtract fraction: " << endl;
    (ps1.Subtraction(ps2)).Output();
    cout << "Multiple fraction: " << endl;
    (ps1.Multiplication(ps2)).Output();
    cout << "Divise fraction: " << endl;
    (ps1.Division(ps2)).Output();
    cout << "Inversion fraction: " << endl;
    ps1.Inversion();
    ps1.Output();
    ps2.Inversion();
    return 0;
}
