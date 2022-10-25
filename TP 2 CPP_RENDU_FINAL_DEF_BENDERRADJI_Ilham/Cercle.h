#pragma once
#include "Point.h"
#include <cmath>
#include <iostream>

using namespace std;

//Construction de la classe Cercle
class Cercle
{
public:
    //Constructeur
    Cercle(const int Diametre, const Point Centre);

    Cercle();
    //setter - getter de Diametre
    inline int getDiametre() const;
    inline void setDiametre(const int lo);
    //setter - getter de Centre
    inline void setCentre(const Point c);
    inline Point getCentre() const;
    //Signature des fonctions
    int PerimetreCercle() const;
    int SurfaceCercle() const;
    void PointSurCercle(Point p) const;
    void PointInterieur(Point p) const;
    void AfficherCercle() const;

private:
    int diametre;
    Point centre;
};
