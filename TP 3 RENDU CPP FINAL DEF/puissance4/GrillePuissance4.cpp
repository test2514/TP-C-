#include "GrillePuissance4.h"

void GrillePuissance4::insererPoint(const Vecteur2 &pos, int id) {
    Vecteur2 newPos = pos - Vecteur2{0, -1};
    if (obtenirPion(newPos) == 0) {
        insererPoint(newPos, id);
    } else {
        Grille::insererPoint(pos, id);
    }
}

GrillePuissance4::GrillePuissance4(const Vecteur2 &size, int pion_gagnant) : Grille(size, pion_gagnant) {

}
