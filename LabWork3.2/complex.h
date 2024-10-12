class Complex
{
public:
    Complex();
    Complex(double, double);
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    bool operator!=(Complex);
    void Print();
private:
    double Real, Imaginary;
};

