#include <iostream>
#include <cstdlib>
#include <string>
#include "Triangle.h"
#include <cmath>



using namespace std;
//Constructeur
Triangle::Triangle(const Point A, const Point B, const Point C)
{
    a = A;
    b = B;
    c = C;
}


Triangle::Triangle() {
   
    a = Point(2,5);
    b = Point(7, 8);
    c = Point(10, 5);

}



// Setter de Point Un
void Triangle::setA(const Point A)
{
    a = A;
}
//Getter de Point Un
Point Triangle::getA() const
{
    return a;
}

// Setter de Point Deux
void Triangle::setB(const Point B)
{
    b = B;
}
//Getter de Point Deux
Point Triangle::getB() const
{
    return b;
}

// Setter de Point Trois
void Triangle::setC(const Point C)
{
    c = C;
}
//Getter de Point Trois
Point Triangle::getC() const
{
    return c;
}



//Fonction permettant de connaitre la longueur de AB

float Triangle::LongueurAB() const {
    float distance_ab = (pow(getA().x - getB().x, 2) + (pow(getA().y - getB().y, 2)));
    float ab = sqrt(distance_ab);
        return ab;
}

//Fonction permettant de connaitre la longueur de AC

float Triangle::LongueurAC() const {
    float distance_ac = (pow(getA().x - getC().x, 2) + pow(getA().y - getC().y, 2));
    float ac = sqrt(distance_ac);
    return ac;
}

//Fonction permettant de connaitre la longueur de CB

float Triangle::LongueurCB() const{
    float distance_cb = (pow(getC().x - getB().x, 2) + pow(getC().y - getB().y, 2));
    float cb = sqrt(distance_cb);
    return cb;
}



//Fonction permettant de connaitre la base du triangle sans affichage

float Triangle::BaseCalcul() const {

    if ((LongueurAB() > LongueurAC()) && (LongueurAB() >= LongueurCB()))
    {
        float base = LongueurAB();
        return base;
    }
    else if ((LongueurAC() > LongueurAB()) && (LongueurAC() > LongueurCB()))
    {
        float base = LongueurAC();
        return base;
    }
    else 
    {
        float base = LongueurCB();
        return base;
    }
}




//Fonction permettant de connaitre la surface/aire du triangle

    float Triangle::Aire_Surface() const
    {
        float perimetre = LongueurAB() + LongueurAC() + LongueurCB();
        float demi_perimetre = (perimetre / 2);
        float aire_s = demi_perimetre*((demi_perimetre - LongueurAB())*(demi_perimetre - LongueurAC())*(demi_perimetre - LongueurCB()));
        float aire_sqrt = sqrt(aire_s);
        return aire_sqrt;
    }

//Fonction permettant de connaitre la hauteur du triangle

    float Triangle::Hauteur() const
    {
        float h = 2*Aire_Surface();
        float hauteur = h / BaseCalcul();
            return hauteur;
    }

//Fonction permettant de connaitre si le triangle est isocele ou non

    void Triangle::Isocele() const
    {
        if ((LongueurAB() == LongueurAC()) && (LongueurCB() != (LongueurAB() && LongueurAC())))
        {
            std::cout << "C'est un triangle isoc�le car AB et AC ont la m�me longueur";
        }
        else if ((LongueurAB() == LongueurCB()) && (LongueurAC() != (LongueurAB() && LongueurCB())))
        {
            std::cout << "C'est un triangle isoc�le car AB et CB ont la m�me longueur";
        }
        else if ((LongueurAC() == LongueurCB()) && (LongueurAB() != (LongueurAC() && LongueurCB())))
        {
            std::cout << "C'est un triangle isoc�le car AC et CB ont la m�me longueur";
        }
        else
        {
            std::cout << "Ce n'est pas un triangle isocele" <<endl;
        }
    }

//Fonction permettant de connaitre si le triangle est �quilat�rale ou non 

    void Triangle::Equilaterale() const
    {
        if (LongueurAB() == LongueurAC() && LongueurAC() == LongueurCB() && LongueurAB() == LongueurCB())
        {
            std::cout << "C'est un triangle �quilat�rale car AB, AC, CB ont la m�me longueur";
        }
        else
        {
            std::cout << "Ce n'est pas un triangle �quilat�rale" << endl;
        }
    }
    
//Fonction permettant de connaitre si le triangle est rectangle ou non 

    void Triangle::TriRectangle() const
    {
        float base = BaseCalcul();
        float AC_deux = pow(LongueurAC(), 2);
        float AB_deux = pow(LongueurAB(), 2);
        float CB_deux = pow(LongueurCB(), 2);

        if (pow(base, 2) == (AC_deux + CB_deux) || pow(base, 2) == (AB_deux + CB_deux) || pow(base, 2) == (AC_deux + AB_deux))
        {
            std::cout << "C'est un triangle rectangle" << endl;
        }
        else 
        {
            std::cout << "Ce n'est pas un triangle rectangle" << endl;
        }
    }

//Fonction permettant de connaitre le perimetre d'un triangle

    float Triangle::Perimetre() const
    {
        float perimetre = LongueurAB() + LongueurAC() + LongueurCB();
        return perimetre;
    }

//Fonction permettant d'afficher toutes les fonctions du triangle
    void Triangle::AfficherTriangle() const
    {
        std::cout << "La longueur de AB est de " << LongueurAB() << endl;
        std::cout << "La longueur de AC est de " << LongueurAC() << endl;
        std::cout << "La longueur de CB est de " << LongueurCB() << endl;
        std::cout << "La base est " << BaseCalcul() << endl;
        std::cout << "l'air/la surface du triangle est de " << Aire_Surface() << endl;
        std::cout << "la hauteur du triangle est de " << Hauteur() << endl;
        std::cout << "le perimetre du triangle est de " << Perimetre() << endl;
    }


