#pragma once

#include "Point2D.h"
#include "CustomException.h"

template<class T>
class Rectangle : public Point2D<T>
{
public:
	Rectangle() {}
	
	Rectangle(T x, T y, T w, T h) : Point2D<T>(x, y), width(w), height(h)
	{
		if(w==0 || h==0) throw CustomException(33);
	}
	
	void setWidth(T w)
	{
		if(w==0) throw CustomException(33);
		this.width = w;
	}
	
	T getWidth()
	{
		return width;
	}
	
	void setHeight(T h)
	{
		if(h==0) throw CustomException(33);
		this.height = h;
	}
	
	T getHeight()
	{
		return height;
	}

	float area() const
	{
		return width * height;
	}

    float circumference() const
	{
		return 2 * (width + height);
	}

protected:
	T width, height;
};
