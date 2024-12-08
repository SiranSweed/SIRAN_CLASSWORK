#include "Point.h"
#include <iostream>

Point::Point()
{
	_coord = new int[LEN];
	_coord[0] = _coord[1] = 0;
}

Point::Point(int x, int y)
{
	_coord = new int[LEN];
	_coord[0] = x;
	_coord[1] = y;
}

Point::Point(const Point& other)
{
	*this = other; // Use the copy operator to copy
}

Point::~Point()
{
	delete[] _coord;
}

Point& Point::operator=(const Point& other)
{
	// Tries to copy the object to itself
	if (this == &other)
	{
		return *this;
	}

	delete[] _coord;
	_coord = new int[LEN];
	memcpy(_coord, other._coord, 2 * sizeof(int));

	return *this;
}

int Point::getX() const 
{ 
	return _coord[0]; 
}

int Point::getY() const
{ 
	return _coord[1]; 
}


std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << "(" << p._coord[0] << "," << p._coord[1] << ")";
	return os;
}
