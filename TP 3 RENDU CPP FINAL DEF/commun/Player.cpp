#include "Player.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include "Vecteur2.h"

using namespace std;

//Constructeur
Player::Player(const std::string& Nom, int Id)
{
    nom = Nom;
    mId = Id;
}

// Setter de nom
void Player::setNom(const std::string name)
{
    nom = name;
}
//Getter de nom
std::string Player::getNom() const
{
    return nom;
}

// Setter de mId
void Player::setId(const int yd)
{
    mId = yd;
}
//Getter de mId
int Player::getId() const
{
    return mId;
}

//Demander les coordonnées puis jouer
bool Player::Jouer(Grille *grille) {

    Vecteur2 vecteur;
    do {
    std::cout << "Le joueur indique dans quel colonne sera son pion" << std::endl;
    std::cin >> vecteur.x;
    std::cin.ignore();

    std::cout << "Le premier joueur indique dans quel ligne sera son pion" << std::endl;
    std::cin >> vecteur.y;
    std::cin.ignore();
    vecteur = vecteur - Vecteur2{1,1};
    } while(!grille->peuxPlacer(vecteur));
    grille->insererPoint(vecteur,mId);

    return grille->gagnant(vecteur);
}


