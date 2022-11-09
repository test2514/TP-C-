#include "Puissance4.h"
#include "GrillePuissance4.h"
#include "JoueurPuissance4.h"

//Constructeur

Puissance4::Puissance4(): Jeu(new JoueurPuissance4 ("John", 1), new JoueurPuissance4 ("Maria",2), new GrillePuissance4 ({7,4},4)) {}



