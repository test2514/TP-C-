#ifndef TP3_VECTEUR2_H
#define TP3_VECTEUR2_H

/**
 * @brief Représentation d'un Vecteur 2D mathématique
 */
struct Vecteur2 {
public:
    /// Coordonnée X
    int x;
    /// Coordonnée Y
    int y;

    /**
     * Opérateur de comparaison
     * @param autre le vecteur à comparer
     * @return vrai si identique
     */
    bool operator==(const Vecteur2 &autre) const { return x == autre.x && y == autre.y; }

    /**
     * Opérateur d'addition
     * @param autre le vecteur à ajouter
     * @return nouveau vecteur égale à la somme des 2 autres
     *
     * Exemple:
     * Vecteur2 vA{1,1};
     * Vecteur2 vB{1,2};
     *
     * Vecteur2 vC = vA + vB;
     * vC == Vecteur2{2,3} // vrai
     */
    Vecteur2 operator+(Vecteur2 const autre) const {
        Vecteur2 newVec{};
        newVec.x = x + autre.x;
        newVec.y = y + autre.y;

        return newVec;
    }

    /**
     * Opérateur de soustraction
     * @param autre le vecteur à soustraire
     * @return nouveau vecteur égale à la différence des 2 autres
     *
     * Exemple:
     * Vecteur2 vA{1,1};
     * Vecteur2 vB{1,2};
     *
     * Vecteur2 vC = vA - vB;
     * vC == Vecteur2{0,1} // vrai
     */
    Vecteur2 operator-(Vecteur2 const &autre) const {
        Vecteur2 newVec{};
        newVec.x = x - autre.x;
        newVec.y = y - autre.y;

        return newVec;
    }
};


#endif //TP3_VECTEUR2_H
