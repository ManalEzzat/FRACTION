📌 Description
A robust and efficient C++ implementation of a Fraction (Rational Number) class. This project provides a custom data type to handle fractions in the form of numerator/denominator, supporting precise arithmetic and logical operations without losing precision through floating-point conversions.
The class follows Object-Oriented Programming (OOP) principles, ensuring data integrity by preventing zero denominators and automatically simplifying results using the Euclidean Algorithm for the Greatest Common Divisor (GCD).

🚀 Key Features
1. Core Functionality
Encapsulation: Private data members with controlled access.

Automatic Simplification: All fractions are stored in their simplest form (e.g., 2/4 becomes 1/2).

Zero-Denominator Protection: Ensures the denominator is never zero (defaults to 1).

2. Operator Overloading
The library treats fractions as primitive types through extensive operator overloading:

Arithmetic: +, -, *, / (returns simplified results).

Comparison: ==, !=, <, >, <=, >=.

I/O Streaming: * Custom << output (intelligently formats 5/1 as 5).

Custom >> input (supports both a/b and whole number a formats).

🛠 Project Structure
fraction.h: Class definition and member function prototypes.

fraction.cpp: Implementation of the arithmetic logic and helper functions.

main.cpp: Test suite demonstrating all operations and comparisons.
