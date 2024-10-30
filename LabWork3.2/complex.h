class Complex
{
    // if not mentioned the access modifier compiler makes it to private
public:
    Complex();
    Complex(double, double);
    Complex operator+(Complex); // overload + operator
    Complex operator-(Complex);
    Complex operator*(Complex);
    bool operator!=(Complex);
    void Print();
private:
    double Real, Imaginary;
};

