#include "Vector.h"
#include <iostream>

using namespace std;

int main()
{
	Vector a(1.0, 2.0, 10.5);
	Vector b(2.0, 4.1, 3.4);
	a;
	bool f;
	f = a > b;
	a + b;
	a - b;
	double z[3] = { 2, 4, 5 };
	a = z;s
	cout << a;
	cin >> a;
	cout << f << endl;
	cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}