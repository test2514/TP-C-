#ifndef TP3_JOUEURPUISSANCE4_H
#define TP3_JOUEURPUISSANCE4_H


#include "../commun/Player.h"

class JoueurPuissance4 : public Player {
public:
    JoueurPuissance4 (const std::string& Nom, int Id);
    bool Jouer(Grille *grille) override;

};


#endif //TP3_JOUEURPUISSANCE4_H
