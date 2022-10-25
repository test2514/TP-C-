#include <iostream>
#include <cstdlib>
#include <string>
#include "Cercle.h"
#include <math.h>

using namespace std;
//Constructeur
Cercle::Cercle(int Diametre, Point Centre)
{
    diametre = Diametre;
    centre = Centre;
}


// Setter de Diametre
void Cercle::setDiametre(const int d)
{
    diametre = d;
}
//Getter de Diametre
int Cercle::getDiametre() const
{
    return diametre;
}

// Setter de Centre
void Cercle::setCentre(const Point c)
{
    centre = c;
}
//Getter de Centre
Point Cercle::getCentre() const
{
    return centre;
}

//Methode permettant de calculer le perimetre d'un cercle
// le type de retour est un entier
int Cercle::PerimetreCercle() const
{
    int const rayon = (getDiametre() / 2);
    int const perimetre_cercle = (rayon * M_PI * 2);

    return perimetre_cercle;
}

//Methode permettant de calculer la surface d'un cercle
// le type de retour est un entier
int Cercle::SurfaceCercle() const
{
    int surface_cercle = (M_PI * getDiametre());

    return surface_cercle;
}

//fonction permettant de d�terminer si un point pass� en param�tre est sur le cercle

void Cercle::PointSurCercle(Point p) const
{

    int rayon = (getDiametre() / 2);
    int distance = (pow(p.x - getCentre().x, 2) + pow(p.y - getCentre().y, 2));
    int vrai_distance = sqrt(distance);
    if (rayon == vrai_distance) 
    {
        std::cout << "Le point est sur le cercle\n";
    }
    else {
        std::cout << "Le point n'est pas sur le cercle\n";
    }
}

//fonction permettant de d�terminer si un point pass� en param�tre est � l�int�rieur du cercle

void Cercle::PointInterieur(Point p) const
{

    int rayon = (getDiametre() / 2);
    int distance = (pow(p.x - getCentre().x, 2) + pow(p.y - getCentre().y, 2));
    int vrai_distance = sqrt(distance);
    if (rayon > vrai_distance)
    {
        std::cout << "Le point est � l'int�rieur du cercle\n";
    }
    else {
        std::cout << "Le point n'est pas � l'int�rieur du cercle\n";
    }
}

//Fonction permettant d'afficher toutes les fonctions du cercle
 void Cercle::AfficherCercle() const
{
    std::cout << "l'air/la surface du cercle est de " << SurfaceCercle() << endl;
    std::cout << "le perimetre du cercle est de " << PerimetreCercle() << endl;
}
