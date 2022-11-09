#include "Morpion.h"


//Constructeur
Morpion::Morpion() : Jeu(new Player ("John", 1), new Player ("Maria",2), new Grille ({3,3},3)) {}


