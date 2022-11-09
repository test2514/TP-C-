#ifndef TP3_GRILLEPUISSANCE4_H
#define TP3_GRILLEPUISSANCE4_H


#include "../commun/Grille.h"

class GrillePuissance4 : public Grille {
public:
    GrillePuissance4(const Vecteur2 &size, int pion_gagnant);
    void insererPoint(const Vecteur2 &pos, int id) override;
};


#endif //TP3_GRILLEPUISSANCE4_H
