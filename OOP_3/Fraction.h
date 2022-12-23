#pragma once
class Fraction
{
public:
	Fraction(int numenator, int denominator);

	int getNumenator() const {
		return _numerator;
	}

	int getDenominator() const {
		return _denominator;
	}
	
	Fraction operator/(Fraction& other) {
		Fraction res((_numerator * other._denominator),(_denominator * other._numerator));
		return res;
	}


private:
	int _numerator;
	int _denominator;
};

