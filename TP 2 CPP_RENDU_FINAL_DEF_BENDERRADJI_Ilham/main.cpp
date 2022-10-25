#include "Rectangle.h"
#include "Triangle.h"
#include "Cercle.h"
#include <cmath>
#include <iostream>

int main()
{
    std::cout << "Partie Rectangle" << endl;
    Rectangle rectangle = Rectangle(1,2);
    rectangle.AfficherRectangle();
    std::cout << "Partie Triangle" << endl;
    Triangle triangle =  Triangle(Point(0,0),Point(0,3),Point(4,0));
    triangle.AfficherTriangle();
    triangle.TriRectangle();
    triangle.Isocele();
    triangle.Equilaterale();
    std::cout << "Partie Cercle" << endl;
    Cercle cercle = Cercle(4,Point(0,1));
    cercle.AfficherCercle();
    cercle.PointSurCercle(Point(5,5));
    cercle.PointInterieur(Point(5,5));

}