#pragma once
#include <iostream>

#define LEN 2

class Point
{
	int* _coord;
public:
	Point();
	Point(int x, int y);
	Point(const Point& other);
	~Point();
	
	Point& operator=(const Point& other);

	int getX() const;
	int getY() const;

	friend std::ostream& operator<<(std::ostream& os, const Point& p);
};
