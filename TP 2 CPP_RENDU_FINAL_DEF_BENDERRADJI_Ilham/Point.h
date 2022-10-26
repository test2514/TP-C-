#pragma once
#include <cmath>
//Cr�ation de ma structure Point
struct Point 
{             // Structure declaration
	float x;         // Contenu de ma structure
	float y;
	
Point() {}

//Constructeur
Point(const float X, const float Y) 
{
	x = X;
	y = Y;
}

//setter - getter de X
inline float getX() const {
	return x;
}
inline void setX(const float a) {
	x = a;
}

//setter - getter de Y

inline float getY() const {
	return y;
}
inline void setY(const float a) {
	y = a;
}
};