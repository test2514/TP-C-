#include "Grille.h"
#include <iostream>


//Constructeur
Grille::Grille(const Vecteur2 &size, int pionGagnant) : mTaille(size), mPointGagnant(pionGagnant) {
    mGrille.resize(size.x);
    for (int x = 0; x < size.x; x++) {
        mGrille[x].resize(size.y);
        for (int y = 0; y < size.y; y++) {
            mGrille[x][y] = 0;
        }
    }
}

// Verifie la range
// Renvoi 0 si vide, 1 ou 2 si pion de joueur, -1 si en dehors de la grille
int Grille::obtenirPion(const Vecteur2 &pos) const {
    // -1  si x ou y plus petit que 0 ou si x ou y plus grand que mTaille (max)
    if (pos.x < 0 || pos.y < 0 || pos.x >= mTaille.x || pos.y >= mTaille.y) {
        return -1;
    } else {   //retourne la valeur de la position qui a était rentrée en paramètre
        return mGrille[pos.x][pos.y];
    }
}

//Fonction permettant d'afficher la mGrille
void Grille::affiche() const {
    for (int y = 0; y < mTaille.y; y++) {
        std::cout << "[ ";
        for (int x = 0; x < mTaille.x; x++)
            std::cout << mGrille[x][y];
        std::cout << "]\n";
    }
}

// Return true ou false si le pion peut etre placé
// (si il n'est pas out of range et si la case est vide)
bool Grille::peuxPlacer(const Vecteur2 &pos) const {
    return obtenirPion(pos) == 0;
}


//Fonction permettant d'ajouter le point du joueur
// verifier si il peut etre placer
void Grille::insererPoint(const Vecteur2 &pos, int id) {
    // Insérer un point s'il est possible de placer sur la cellule
    if (peuxPlacer(pos)) {
        mGrille[pos.x][pos.y] = id;
    } else {
        insererPoint(pos, id);
        std::cout << " Recommencer " << std::endl;
    }
}


//Fonction permettant de savoir si la grille est pleine ou non (egalite)
// Vrai s'il n'y a plus aucune case vide
bool Grille::estPleine() {
    for (int x = 0; x < mTaille.x; x++) {
        for (int i = 0; i < mTaille.y; i++) {
            if (mGrille[x][i] == 0)
                return false;
        }
    }

    return true;
}

//Fonction qui me permet de savoir si il y a un gagnant ou non
//On récup les pion à coter de la position qu'on à indiquer
//Puis on verifie si la valeur contenue dans les pion recuperer est la même que celui indiquer au départ
//verifier avant pendant apres
// [i - mPoint gagnant] [i + mPointGagnant]
bool Grille::gagnant(const Vecteur2 &pos) const {
    int valeur_pion_init = obtenirPion(pos);
    int compteur = 0;
    if (valeur_pion_init == 0) {
        return false;
    }
    //Pour le cas horizontal (ligne)
    for (int x = pos.x - mPointGagnant; x < (pos.x + mPointGagnant); x++) {
        if (x < 0) {
            continue;
        }
        if (pos.x > mTaille.x) {
            break;
        }
        int pion_actuel = obtenirPion({x, pos.y});
        if (pion_actuel == valeur_pion_init) {
            compteur++;
        } else {
            break;
        }
        if (compteur >= mPointGagnant) {
            return true;
        }
    }

    compteur = 0;

    //Pour le cas qvertical (colonne)
    for (int y = pos.y - mPointGagnant; y < (pos.y + mPointGagnant); y++) {
        if (y < 0) {
            continue;
        }
        if (pos.y > mTaille.y) {
            break;
        }
        int pion_actuel = obtenirPion({pos.x, y});
        if (pion_actuel == valeur_pion_init) {
            compteur++;
        } else {
            break;
        }
        if (compteur >= mPointGagnant) {
            return true;
        }
    }


    compteur = 0;

    //Pour le cas diagonal (cas 1)
    for (int i = pos.x - mPointGagnant; i < (pos.x + mPointGagnant); i++) {
        if (pos.x + i < 0 || pos.y + i < 0) {
            continue;
        }
        if (pos.y + i > mTaille.y || pos.x + i > mTaille.x) {
            break;
        }
        int pion_actuel = obtenirPion({pos.x + i, pos.y + i});
        if (pion_actuel == valeur_pion_init) {
            compteur++;
        } else {
            break;
        }
        if (compteur >= mPointGagnant) {
            return true;
        }
    }


    compteur = 0;

    //Pour le cas diagonal (cas 2)
    for (int i = pos.x - mPointGagnant; i < (pos.x + mPointGagnant); i++) {
        if (pos.x + i < 0 || pos.y - i < 0) {
            continue;
        }
        if (pos.x + i > mTaille.x || pos.y - i > mTaille.y) {
            break;
        }
        int pion_actuel = obtenirPion({pos.x + i, pos.y - i});
        if (pion_actuel == valeur_pion_init) {
            compteur++;
        } else {
            break;
        }
        if (compteur >= mPointGagnant) {
            return true;
        }
    }

    return false;
}

