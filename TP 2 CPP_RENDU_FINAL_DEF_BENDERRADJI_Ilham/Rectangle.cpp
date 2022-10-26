#include <iostream>
#include <cstdlib>
#include <string>
#include "Rectangle.h"

using namespace std;
//Constructeur
Rectangle::Rectangle(const int Longueur, const int Largeur)
{
    longueur = Longueur;
    largeur = Largeur;
}
// Setter de longueur
void Rectangle::setLongueur(const int lo)
{
    longueur = lo;
}
//Getter de longueur
int Rectangle::getLongueur() const
{
    return longueur;
}

// Setter de largeur
void Rectangle::setLargeur(const int la)
{
    largeur = la;
}
//Getter de largeur
int Rectangle::getLargeur() const
{
    return largeur;
}

//Methode permettant de calculer le perimetre d'un rectangle
// le type de retour est un entier
int Rectangle::Perimetre() const
{
    int perimetre = (getLongueur() + getLargeur()) * 2;

    return perimetre;
}

//Methode permettant de calculer la surface d'un rectangle
// le type de retour est un entier
int Rectangle::Surface() const
{
    int surface = (getLongueur() * getLargeur());

    return surface;
}

//Methode permettant d'afficher les fonctions du Rectangle
void Rectangle::AfficherRectangle() const
{
    
std::cout << "le perimetre du rectangle est de " << Perimetre() << endl;
std::cout << "la surface du rectangle est de " << Surface() << endl;
}






