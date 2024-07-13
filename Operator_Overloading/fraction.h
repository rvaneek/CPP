#ifndef __FRACTION_H__
#define __FRACTION_H__

#include <string>
#include <stdexcept>
#include <sstream>
using namespace std;

class Fraction {
    int numerator, denominator;
    int LCM(int x, int y) {
        int i = y;
        while (y % x)
            y += i;
        return y;
    }

    int GCD(int x, int y) {
        for (;;) {
            x %= y;
            if (!x)
                return y;
            y %= x;
            if (!y)
                return x;
        }
    }

public:
    Fraction() : numerator(0), denominator(1) {
    };

    Fraction(int n) : numerator(n), denominator(1) {
    };

    Fraction(int n, int d) : numerator(n), denominator(d) {
        if (denominator == 0)
            throw domain_error("bad fraction");
    };

    string to_string() {
        ostringstream os;
        os << "[" << numerator << "/" << denominator << "]";
        return os.str();
    }

    double get_double() {
        return double(numerator) / double(denominator);
    }

    Fraction operator!() {
        int gcd = GCD(numerator, denominator);
        return {numerator / gcd, denominator / gcd};
    }

    Fraction operator+(Fraction arg) {
        int common_denom = LCM(denominator, arg.denominator);
        int new_numer = numerator * common_denom / denominator +
                        arg.numerator * common_denom / arg.denominator;
        Fraction f(new_numer, common_denom);
        return f;
    }

    Fraction operator*(Fraction arg) {
        int numera = numerator * arg.numerator;
        int denomi = denominator * arg.denominator;
        Fraction f(numera, denomi);
        return !f;
    }

    Fraction operator/(Fraction arg) {
        if (arg.numerator == 0)
            throw std::domain_error("division by zero");
        int numera = numerator * arg.denominator;
        int denomi = denominator * arg.numerator;
        Fraction f(numera, denomi);
        return !f;
    }

    Fraction &operator+=(Fraction arg) {
        int common_denom = LCM(denominator, arg.denominator);
        int numera = numerator * common_denom / denominator +
                     arg.numerator * common_denom / arg.denominator;
        numerator = numera;
        denominator = common_denom;
        return *this;
    }
};

std::ostream &operator<<(std::ostream &ostr, Fraction &f);

std::ostream &operator<<(std::ostream &ostr, Fraction &f) {
    return ostr << f.to_string();
}

#endif
