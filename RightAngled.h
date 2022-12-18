#include "Triangle.h"

using namespace std;

class RightAngled : public Triangle {
protected:
	double S;

public:
	RightAngled(void);

	RightAngled(int first, int second, int third);

	void set_A(int first);

	void set_B(int second);

	void set_C(int third);

	void alpha();

	void betta();

	void gamma();

	void perimeter();

	void square();

	friend ostream& operator<<(ostream& out, RightAngled& p);

	friend istream& operator>>(istream& in, RightAngled& p);

	string toString();
};

