#pragma once
#ifndef FRACTION_H
#define FRACTIN_H
#include<iostream>
using namespace std;
class fraction {
    int numerator;
    int denominator;
    int commonDivisor(int a, int b);
    void simplify();
public:
    fraction();
    fraction(int n, int d);
    int getDenominator() const { return denominator; }

    // arithmetic operation
    fraction operator+(const fraction& other)const;
    fraction operator-(const fraction& other)const;
    fraction operator*(const fraction& other)const;
    fraction operator/(const fraction& other)const;

    //comparison oberator
    bool operator==(const fraction& other)const;
    bool operator!=(const fraction& other)const;
    bool operator<(const fraction& other)const;
    bool operator>(const fraction& other)const;
    bool operator<=(const fraction& other)const;
    bool operator>=(const fraction& other)const;

    //friend function for stream
    friend ostream& operator<<(ostream& os, const fraction& f);
    friend istream& operator>>(istream& is, fraction& f);

};

#endif 
