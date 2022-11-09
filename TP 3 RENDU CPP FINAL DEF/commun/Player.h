#include <iostream>
#include <cstdlib>
#include <string>
#include "Grille.h"
#ifndef TP3_PLAYER_H
#define TP3_PLAYER_H


class Player {


public:

    Player(const std::string& Nom, int Id);

    // Getters/Setters
    void setNom(std::string name);
    std::string getNom() const;

    void setId(int yd);
    int getId() const;



    // Signature des fonctions
    virtual bool Jouer(Grille *grille);

private:
    std::string nom;
    int mId;

};



#endif //TP3_PLAYER_H
