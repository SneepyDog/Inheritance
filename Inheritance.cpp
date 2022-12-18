#include "RightAngled.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    Triangle l;
    RightAngled o;

    cout << l << endl;
    cout << o << endl;

    Triangle p(3, 5, 7);
    cout << p << endl;

    p.set_A(4);
    p.set_B(6);
    p.set_C(8);

    p.alpha();
    p.betta();
    p.gamma();

    p.perimeter();

    cout << "Введите стороны прямоугольного треугольника." << endl;
    cin >> o;

    o.alpha();
    o.betta();
    o.gamma();

    o.perimeter();
    o.square();

    cout << o;
}
