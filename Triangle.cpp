#include "Triangle.h"
#include <string>
#include <math.h>

Triangle::Triangle(void) : A(0), B(0), C(0) {}

Triangle::Triangle(int first, int second, int third) : A(first), B(second), C(third) {}

void Triangle::set_A(int first) {
	A = first;
}

void Triangle::set_B(int second) {
	B = second;
}

void Triangle::set_C(int third) {
	C = third;
}

void Triangle::alpha() {
	double cosa, al;
	double m, n;
	m = B * B + C * C - A * A;
	n = 2 * B * C;
	cosa = m / n;
	al = acos(cosa);
	al = al * 180 / 3.14;
	cout << "Alpha = " << al << endl;
}

void Triangle::betta() {
	double cosb, be;
	double m, n;
	m = A * A + C * C - B * B;
	n = 2 * A * C;
	cosb = m / n;
	be = acos(cosb);
	be = be * 180 / 3.14;
	cout << "Betta = " << be << endl;
}

void Triangle::gamma() {
	double cosc, ga;
	double m, n;
	m = B * B + A * A - C * C;
	n = 2 * B * A;
	cosc = m / n;
	ga = acos(cosc);
	ga = ga * 180 / 3.14;
	cout << "Gamma = " << ga << endl;
}

void Triangle::perimeter() {
	int P;
	P = A + B + C;
	cout << "Perimeter = " << P << endl;
}

ostream& operator<<(ostream& out, Triangle& p) {
	out << "First = " << p.A << endl;
	out << "Second = " << p.B << endl;
	out << "Third = " << p.C << endl;
	return out;
}

istream& operator>>(istream& in, Triangle& p) {
	in >> p.A;
	in >> p.B;
	in >> p.C;
	return in;
}

string Triangle::toString() {
	string s = "First = " + to_string(A) + ". Second = " + to_string(B) + ". Third = " + to_string(C) + ".";
	return s;
}
