#ifndef TP3_JEU_H
#define TP3_JEU_H
#include "Player.h"
#include "Grille.h"

class Jeu {
public:
    Jeu(Player *joueur_1, Player *joueur_2, Grille *grille);
    ~Jeu();
    void commencerPartie();

protected:
    Player *joueur_1;
    Player *joueur_2;
    Grille *grille;
};


#endif //TP3_JEU_H
