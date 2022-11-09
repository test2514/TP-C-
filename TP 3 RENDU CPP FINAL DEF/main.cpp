#include <iostream>
#include "morpion/Morpion.h"
#include "puissance4/Puissance4.h"


int main() {

    Jeu* game = nullptr;

    int choix = 0;
    std::cout << "Choississez le jeu auquel vous voulez jouez choix 1 : Morpion choix 2 : Puissance4" << std::endl;

    std::cin >> choix;

    switch (choix) {
        case 1:
            game = new Morpion();
            break;
        case 2:
            game = new Puissance4();
            break;
        default:
            return 0;
    }

    game->commencerPartie();

    delete game;

    return 0;
}
