#ifndef _FRAC_H_
#define _FRAC_H_

#include <iostream>
#include <math.h>
using namespace std;

class Fraction 
{
    int numberator;
    int denominator;
public:
    void Input();
    void Output();
    Fraction();
    Fraction(int t, int m);
    Fraction (const Fraction &ps);
    void Inversion ();
    void Reduction ();
    //int get_Numberator ();
    //int get_Denominator ();
    Fraction Addition (Fraction ps);
    Fraction Subtraction (Fraction ps);
    Fraction Multiplication (Fraction ps);
    Fraction Division (Fraction ps);
    int UCLN (int a, int b);
};


#endif