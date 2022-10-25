#pragma once
#include "Point.h"
#include <cmath>
#include <iostream>

using namespace std;

//Construction de la classe Triangle
class Triangle
{
public:
    //Constructeur
    Triangle(const Point A, const Point B, const Point C);

    Triangle();
    //setter - getter de Point Un
    inline Point getA() const;
    inline void setA(const Point a);
    //setter - getter de Point Deux
    inline Point getB() const;
    inline void setB(const Point b);
    //setter - getter de Point Trois
    inline Point getC() const;
    inline void setC(const Point c);
    //Signature des fonctions pr�sente dans le triangle.cpp
    float BaseCalcul() const;
    float LongueurAB() const;
    float LongueurAC() const;
    float LongueurCB() const;
    float Aire_Surface() const;
    float Hauteur() const;
    void Isocele() const;
    void Equilaterale() const;
    void TriRectangle() const;
    float Perimetre() const;
    void AfficherTriangle() const;

private:
    Point a;
    Point b;
    Point c;
};