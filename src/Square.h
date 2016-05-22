#pragma once

#include "Point2D.h"
#include "Rectangle.h"

template<class T>
class Square : public Rectangle<T>
{
public:
	Square(T x, T y, T side) : Rectangle<T>(x, y, side, side){}
};
