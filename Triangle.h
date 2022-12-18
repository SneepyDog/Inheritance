#include <iostream>

using namespace std;

class Triangle {
protected:
	int A, B, C;

public:
	Triangle(void);

	Triangle(int first, int second, int third);

	void set_A(int first);

	void set_B(int second);

	void set_C(int third);

	void alpha();

	void betta();

	void gamma();

	void perimeter();

	friend ostream& operator<<(ostream& out, Triangle& p);

	friend istream& operator>>(istream& in, Triangle& p);

	string toString();
};

