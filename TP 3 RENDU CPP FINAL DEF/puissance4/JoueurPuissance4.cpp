#include "JoueurPuissance4.h"

JoueurPuissance4::JoueurPuissance4(const std::string& Nom, int Id) : Player(Nom, Id) {

}

bool JoueurPuissance4::Jouer(Grille *grille) {

        Vecteur2 vecteur({-1,1});
        do {

            std::cout << "Le joueur indique dans quel colonne sera son pion" << std::endl;
            std::cin >> vecteur.x;
            std::cin.ignore();

            vecteur = vecteur - Vecteur2{1,1};
        } while(!grille->peuxPlacer(vecteur));
        grille->insererPoint(vecteur,getId());

        return grille->gagnant(vecteur);
}


