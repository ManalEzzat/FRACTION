#include "fraction.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int fraction::commonDivisor(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
	}
	void fraction::simplify() {
		int common = commonDivisor(abs(numerator), abs(denominator));
		numerator /= common;
		denominator /= common;
		if (denominator < 0) {
			numerator = -numerator;
			denominator = -denominator;
		}
	}

	
	fraction::fraction() {
		numerator = 0;
		denominator = 1;
	}
	fraction::fraction (int n, int d) {
		numerator = n;
		denominator = (d == 0) ? 1 : d;
		simplify();
	}
	// Arithmetic Implementation
	fraction fraction:: operator+(const fraction& other)const {
		int n = (numerator * other.denominator) + (denominator * other.numerator);
		int d = denominator * other.denominator;
		return fraction(n, d);
	 }
	fraction fraction:: operator-(const fraction& other)const {
		int n = (numerator * other.denominator) - (denominator * other.numerator);
		int d = denominator * other.denominator;
		return fraction(n, d);
	}
	fraction fraction::operator*(const fraction& other)const {
		return fraction(numerator * other.numerator , denominator * other.denominator);
	}
	fraction fraction::operator/(const fraction& other)const {
		return fraction(numerator * other.denominator, denominator * other.numerator);
	}
	// Comparison Implementation
	bool fraction::operator==(const fraction& other)const {
		return (numerator == other.numerator && denominator == other.denominator);
	}
	bool fraction::operator!=(const fraction& other)const { 
		return (numerator != other.numerator || denominator != other.denominator);
	}
	bool fraction::operator<(const fraction& other) const {
		return (numerator * other.denominator < other.numerator * denominator);
	}
	bool fraction::operator>(const fraction& other) const {
		return (numerator * other.denominator > other.numerator * denominator);
	}
	bool fraction::operator<=(const fraction& other)const {
		return (numerator * other.denominator <= other.numerator * denominator);

	}
	bool fraction::operator>=(const fraction& other)const {
		return (numerator * other.denominator >= other.numerator * denominator);

	}

	ostream& operator<<(ostream& os, const fraction& f) {
		if (f.denominator == 1) os << f.numerator;
		else os << f.numerator << "/" << f.denominator;
		return os;
	}

	istream& operator>>(istream& is, fraction& f) {
		string input;
		is >> input;
		size_t slashPos = input.find('/');
		if (slashPos != string::npos) {
			f.numerator =stoi(input.substr(0, slashPos));
			f.denominator = stoi(input.substr(slashPos + 1));
		}
		else {
			f.numerator =stoi(input);
			f.denominator = 1;
		}
		f.simplify();
		return is;
	}
