#include "complex.h"
#include <iostream>

using namespace std;

Complex::Complex()  // :: is scope resolution operator
{
    Real = 0;
    Imaginary = 0;
}
Complex::Complex(double r, double i)
{
    Real = r;
    Imaginary = i;
}
Complex Complex::operator+(Complex a)
{
    Complex t; // object creating t
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}
Complex Complex::operator-(Complex a)
{
    Complex t;
    t.Real = Real - a.Real;
    t.Imaginary = Imaginary - a.Imaginary;
    return t;
}
Complex Complex::operator*(Complex a)
{
    Complex t;
    t.Real = Real * a.Real;
    t.Imaginary = Imaginary * a.Imaginary;
    return t;
}
bool Complex::operator!=(Complex a)
{
    if(Real != a.Real || Imaginary != a.Imaginary)
        return true;
    else
        return false;
}
void Complex::Print()
{
    cout << "Real Part: " <<Real << endl;
    cout << "Imaginary Part: "<<Imaginary << endl;
    cout << "Expression: " << Real << "+" << Imaginary <<"i" ;
}

