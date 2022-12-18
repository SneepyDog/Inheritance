#include "RightAngled.h"
#include <string>
#include <math.h>

RightAngled::RightAngled(void) : Triangle(), S(0) {}

RightAngled::RightAngled(int a, int b, int c) : Triangle(a, b, c) {
	square();
}

void RightAngled::set_A(int first) {
	A = first;
}

void RightAngled::set_B(int second) {
	B = second;
}

void RightAngled::set_C(int third) {
	C = third;
}

void RightAngled::alpha() {
	double cosa, al;
	double m, n;
	m = B * B + C * C - A * A;
	n = 2 * B * C;
	cosa = m / n;
	al = acos(cosa);
	al = al * 180 / 3.14;
	cout << "Alpha = " << al << endl;
}

void RightAngled::betta() {
	double cosb, be;
	double m, n;
	m = A * A + C * C - B * B;
	n = 2 * A * C;
	cosb = m / n;
	be = acos(cosb);
	be = be * 180 / 3.14;
	cout << "Betta = " << be << endl;
}

void RightAngled::gamma() {
	double cosc, ga;
	double m, n;
	m = B * B + A * A - C * C;
	n = 2 * B * A;
	cosc = m / n;
	ga = acos(cosc);
	ga = ga * 180 / 3.14;
	cout << "Gamma = " << ga << endl;
}

void RightAngled::perimeter() {
	int P;
	P = A + B + C;
	cout << "Perimeter = " << P << endl;
}

void RightAngled::square() {
	double s;
	double p = (A + B + C) / 2;
	s = p * (p - A) * (p - B) * (p - C);
	S = sqrt(s);
}

ostream& operator<<(ostream& out, RightAngled& p) {
	out << "First = " << p.A << endl;
	out << "Second = " << p.B << endl;
	out << "Third = " << p.C << endl;
	out << "Square = " << p.S << endl;
	return out;
}

istream& operator>>(istream& in, RightAngled& p) {
	in >> p.A;
	in >> p.B;
	in >> p.C;
	return in;
}

string RightAngled::toString() {
	string s = "First = " + to_string(A) + ". Second = " + to_string(B) + ". Third = " + to_string(C) + ".";
	return s;
}