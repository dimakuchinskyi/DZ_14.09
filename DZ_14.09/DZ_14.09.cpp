#include <iostream>
using namespace std;

class Fraction {
    int _numerator;
    int _denominator;
public:
    Fraction() {
        _numerator = 0;
        _denominator = 1;
    }

    Fraction(int num) : Fraction()
    {
        SetNumerator(num);
    }
    Fraction(int num, int den) : Fraction(num)
    {
        SetDenominator(den);
    }

    void SetNumerator(int num) {
        _numerator = num;
    }
    void SetDenominator(int den) {
        _denominator = den;
    }

    int GetNumerator() const {
        return _numerator;
    }

    int GetDenominator() const {
        return _denominator;
    }

    void print() const {
        cout << "Fraction: " << _numerator << "/" << _denominator << endl;
    }

    Fraction add(const Fraction& other) const {
        int num = _numerator * other._denominator + other._numerator * _denominator;
        int den = _denominator * other._denominator;
        return Fraction(num, den);
    }

    Fraction subtract(const Fraction& other) const {
        int num = _numerator * other._denominator - other._numerator * _denominator;
        int den = _denominator * other._denominator;
        return Fraction(num, den);
    }

    Fraction multiply(const Fraction& other) const {
        int num = _numerator * other._numerator;
        int den = _denominator * other._denominator;
        return Fraction(num, den);
    }

    Fraction divide(const Fraction& other) const {
        int num = _numerator * other._denominator;
        int den = _denominator * other._numerator;
        return Fraction(num, den);
    }
};

int main() {
    Fraction frac1, frac2;
    Fraction result;

    frac1.SetNumerator(2);
    frac1.SetDenominator(5);

    frac1.SetNumerator(3);
    frac1.SetDenominator(7);

    result = frac1.add(frac2);
    cout << "Add result: ";
    result.print();

    result = frac1.subtract(frac2);
    cout << "Subtract result: ";
    result.print();

    result = frac1.multiply(frac2);
    cout << "Multiply result: ";
    result.print();

    result = frac1.divide(frac2);
    cout << "Divide result: ";
    result.print();

    return 0;
}