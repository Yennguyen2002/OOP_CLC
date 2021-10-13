#include "Frac.h"

void Fraction::Input ()
{
    cout << "PLEASE ENTER THE NUMERATOR : " << endl;
    cin >> numberator;
    cout << "PLEASE ENTER THE DENOMINATOR : " << endl;
    cin >> denominator;
}

void Fraction::Output ()
{
    Reduction ();
    cout << "Fraction : " << endl;
    if (denominator == 0)
    {
        cout << 0 << endl;
    }
    else if (denominator == 1)
    {
        cout << numberator << endl;
    }
    else
    {
        cout << numberator << "/" << denominator << endl;
    }
}

Fraction::Fraction ()
{
    numberator = 0;
    denominator = 1;
}

Fraction::Fraction (int t, int m)
{
    if (m < 0)
    {
        t = -t;
        m = -m;
    }
    numberator = t;
    if (m == 0)
    {
        denominator = 1;
    }
    else
    denominator = m;
}

Fraction::Fraction (const Fraction &ps)
{
    numberator = ps.numberator;
    denominator = ps.denominator;
}

void Fraction::Inversion ()
{
    swap (numberator, denominator);
}

int Fraction::get_Numberator ()
{
    //this->numberator = numberator;
    return numberator;
}

int Fraction::get_Denominator ()
{
    //this->denominator = denominator;
    return denominator;
}

Fraction Fraction::Addition (Fraction ps)
{
    Fraction ans;
    ans.numberator = numberator * ps.denominator + denominator * ps.numberator;
    ans.denominator = denominator * ps.denominator;
    return ans;
}

Fraction Fraction::Subtraction (Fraction ps)
{
    Fraction ans;
    ans.numberator = numberator * ps.denominator - denominator * ps.numberator;
    ans.denominator = denominator * ps.denominator;
    return ans;
}

Fraction Fraction::Multiplication (Fraction ps)
{
    Fraction ans;
    ans.numberator = numberator * ps.numberator;
    ans.denominator = denominator * ps.denominator;
    return ans;
}

Fraction Fraction::Division (Fraction ps)
{
    Fraction ans;
    ans.numberator = numberator * ps.denominator;
    ans.denominator = denominator * ps.numberator;
    return ans;
}

int UCLN (int a, int b)
{
    if (b == 0) return a;
    return UCLN(b, a%b);
}

void Fraction::Reduction ()
{
    int temp = UCLN (numberator,denominator);
    numberator = numberator / temp;
    denominator = denominator / temp;
}


