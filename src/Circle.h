#pragma once

#include "Point2D.h"
#include "CustomException.h"
#include <math.h>

template<class T>
class Circle : public Point2D<T>
{
public:
	Circle(){}
	
	Circle(T x, T y, T r) : Point2D<T>(x, y), radius(r)
	{
		if(r==0) throw CustomException(22);
	}
	
	void setRadius(T r)
	{
		if(r==0) throw CustomException(22);
		radius = r;
	}
	
	T getRadius()
	{
		return radius;
	}

	float area() const
	{
		return M_PI * radius * radius;
	}

    float circumference() const
	{
		return 2 * M_PI * radius;
	}

private:
	T radius;
};
