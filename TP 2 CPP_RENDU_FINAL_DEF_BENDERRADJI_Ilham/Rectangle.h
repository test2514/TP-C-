#pragma once
#include "Point.h"
#include <cmath>
#include <iostream>


using namespace std;

//Construction de la classe Rectangle
class Rectangle
{
public:
    //Constructeur
    Rectangle(int const longueur, int const largeur);

    Rectangle();
    //setter - getter de Longueur
    inline int getLongueur() const;
    inline void setLongueur(const int lo);
    //setter - getter de Largeur
    inline void setLargeur(const int la);
    inline int getLargeur() const;
    //Signature des fonctions perimetre et Surface
    int Perimetre() const;
    int Surface() const;
    void AfficherRectangle() const;

private:
    int longueur;
    int largeur;
    Point coin_superieur_gauche;


};