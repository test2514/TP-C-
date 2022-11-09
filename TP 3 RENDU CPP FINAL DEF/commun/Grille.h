#ifndef TP3_GRILLE_H
#define TP3_GRILLE_H


#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include "Vecteur2.h"


class Grille {

public:

    //Constructeur
    Grille(const Vecteur2 &size, int pion_gagnant);

    // Getters/Setters
    Vecteur2 getTaille() const { return mTaille; }


    // Signature des fonctions
    void affiche() const;
    bool peuxPlacer(const Vecteur2 &pos) const;
    virtual void insererPoint(const Vecteur2 &pos, int id);
    int obtenirPion(const Vecteur2 &pos) const;
    bool estPleine();
    bool gagnant(const Vecteur2 &pos) const;

protected:
    Vecteur2 mTaille;
    int mPointGagnant;
    std::vector<std::vector<int>> mGrille{};
};



#endif //TP3_GRILLE_H
