#include "Vector.h"
#include <math.h>
#include <iostream>

using namespace std;

Vector::Vector(double _x, double _y, double _z) {
	*x = _x;
	*y = _y;
	*z = _z;
}
Vector::Vector(Vector& obj) {
	*x = *obj.x; *y = *obj.y; *z = *obj.z;
}
Vector::~Vector() {
	delete[] x;
	delete[] y;
	delete[] z;
}

void Vector::setX(double value)
{
	*x = value;
}

double Vector::getX()
{
	return *x;
}

void Vector::setY(double value)
{
	*y = value;
}

double Vector::getY()
{
	return *y;
}

void Vector::setZ(double value)
{
	*z = value;
}

double Vector::getZ()
{
	return *z;
}

double Vector::length() {
	return sqrt(pow(*x, 2) + pow(*y, 2) + pow(*z, 2));
}


void Vector::operator+(Vector obj) {
	*x += *obj.x;
	*y += *obj.y;
	*z += *obj.z;
}
void Vector::operator-(Vector obj) {
	*x -= *obj.x;
	*y -= *obj.y;
	*z -= *obj.z;
}

bool Vector::operator>(Vector obj) {
	return length() > obj.length();
}
bool Vector::operator<(Vector obj) {
	return length() < obj.length();
}
bool Vector::operator==(Vector obj) {
	return length() == obj.length();
}
void Vector::operator=(double value[3]) {
	*x = value[0];
	*y = value[1];
	*z = value[2];
}

ostream& operator<<(ostream& out, const Vector& vector) {
	out << "Vector(" << *vector.x << ", " << *vector.y << ", " << *vector.z << ")";
	return out;
}

istream& operator>>(istream& in, Vector& vector) {
	in >> *vector.x;
	in >> *vector.y;
	in >> *vector.z;

	return in;
}

/* void Vector::operator>>(int shift)
{
	double* temp;
	for (int i = 0; i < shift % 3; i++) {
		temp = x;
		x = z;
		z = y;
		y = temp;
	}
}

void Vector::operator<<(int shift)
{
	double* temp;
	for (int i = 0; i < shift % 3; i++) {
		temp = x;
		x = y;
		y = z;
		z = temp;
	}
}
*/
double Vector::scalar_product(Vector obj) {
	return (*x) * (*obj.x) + (*y) * (*obj.y) + (*z) * (*obj.z);
}
Vector Vector::vector_product(Vector obj, double sin) {
	double new_x = (*y) * (*obj.z) - (*z) * (*obj.y);
	double new_y = (*z) * (*obj.x) - (*x) * (*obj.z);
	double new_z = (*x) * (*obj.y) - (*y) * (*obj.x);
	Vector temp(new_x, new_y, new_z);
	return temp;
}

