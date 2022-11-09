#include <iostream>
#include "Jeu.h"


//Constructeur
Jeu::Jeu(Player *joueur_1, Player *joueur_2, Grille *grille)
{
    this->joueur_1 = joueur_1;
    this->joueur_2 = joueur_2;
    this->grille = grille;
}

Jeu::~Jeu() {
    delete this->joueur_1;
    delete this->joueur_2;
    delete this->grille;
}

void Jeu::commencerPartie() {
    bool gagner = false;
    bool pleine = false;
    int joueur_actuel = joueur_1->getId();
    std::cout << "Le joueur " << joueur_1->getId() << "place un pion " << std::endl;
    // tant que pas (gagner ou plein)
    //while (!(gagner || plein))
    // tant que pas gagner et pas plein
    while (!gagner && !pleine)
    {
        grille->affiche();
        if (joueur_actuel == joueur_1->getId()) {
            gagner = joueur_1->Jouer(grille);
            joueur_actuel = joueur_2->getId();
        }
        else {
            gagner = joueur_2->Jouer(grille);
            joueur_actuel = joueur_1->getId();
        }
        pleine = grille->estPleine();
    }

    grille->affiche();

    if (pleine) {
        std::cout << "égalité, rejouer" << std::endl;

        return;
    }
    else {
        std::cout << "Joueur ";
        if (joueur_actuel == 1) {
            std::cout << joueur_2->getNom();
        } else {
            std::cout << joueur_1->getNom();
        }
        std::cout << " à gagner" << std::endl;
    }
}