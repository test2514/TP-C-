cmake_minimum_required(VERSION 3.23)
project(TP3)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES
        main.cpp

        morpion/Morpion.cpp morpion/Morpion.h

        commun/Grille.cpp commun/Grille.h
        commun/Vecteur2.h

        puissance4/Puissance4.cpp puissance4/Puissance4.h
        commun/Jeu.cpp commun/Jeu.h commun/Player.cpp commun/Player.h puissance4/JoueurPuissance4.cpp puissance4/JoueurPuissance4.h puissance4/GrillePuissance4.cpp puissance4/GrillePuissance4.h)

add_executable(TP3 ${SOURCES})
