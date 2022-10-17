#pragma once
#include <iostream>

class Vector {
	double *x = new double;
	double *y = new double;
	double *z = new double;
	double length();

public:
	Vector(double _x, double _y, double _z);
	Vector(Vector &obj);
	~Vector();

	void setX(double value);
	double getX();
	void setY(double value);
	double getY();
	void setZ(double value);
	double getZ();

	void operator+(Vector obj);
	void operator-(Vector obj);
	bool operator>(Vector obj);
	bool operator<(Vector obj);
	bool operator==(Vector obj);

	void operator=(double value[3]);
	friend std::ostream & operator<<(std::ostream & out, const Vector & vector);
	friend std::istream& operator>>(std::istream& in, Vector& vector);
	double scalar_product(Vector obj);
	Vector vector_product(Vector obj, double sin);


};
