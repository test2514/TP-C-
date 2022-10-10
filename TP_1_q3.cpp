#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;

void Demande_Prenom()
{
    string prenom = "";
    cout << "Quel est votre prénom ?" << endl;
    cin >> prenom;
    cout <<"votre prenom est " << prenom << endl;
    cin.ignore();
}

void Demande_Nom_Prenom()
{
    string nom_prenom ="";
    cout << "Quel est votre nom et prénom ?" << endl;
    getline(cin, nom_prenom);
    cout <<"votre nom et prenom est " << nom_prenom << endl;
}

void Devinette() 
{
    const int MIN = 0;
    const int MAX = 1000;
    int nbr_aleatoire=(rand() % (MAX + 1 - MIN)) + MIN;
    int devine;
    cout << "Un nombre va être généré aléatoirement "<< endl;
    cout << "Devinez le nombre"<< endl;
    cin >> devine;
    if (devine == nbr_aleatoire)
    {
        cout <<"Vous avez deviné le bon nombre" << endl;
    }
    else if (devine > nbr_aleatoire)
    {
        cout <<"le nombre est plus petit" << endl;
    }
    else if (devine < nbr_aleatoire)
    {
        cout <<"le nombre est plus grand" << endl;
    }
}

void Devinette_Evolution()
{
    const int MINI = 0;
    const int MAXI = 1000;
    int nbr_aleatoire=(rand() % (MAXI + 1 - MINI)) + MINI;
    int devine;
    int compteur=0;
    cout << "Un nombre va être généré aléatoirement ; evolution"<< endl;

    while (devine != nbr_aleatoire) 
    {
    compteur=compteur+1;
    cout << "Devinez le nombre"<< endl;
    cin >> devine;

    if (devine == nbr_aleatoire)
    {
        cout <<"Vous avez deviné le bon nombre" << endl;
    }
    else if (devine > nbr_aleatoire)
    {
        cout <<"le nombre est plus petit" << endl;
    }
    else if (devine < nbr_aleatoire)
    {
        cout <<"le nombre est plus grand" << endl;
    }
    }
    cout <<"Vous avez réussis au bout de " << compteur << " fois."<< endl;
}

int main()
{
    srand (time(NULL));
    // 3 1.1
    Demande_Prenom();
    //3 1.2
    Demande_Nom_Prenom();
    //3 2.1
    Devinette();
    // 3 2.2 
    Devinette_Evolution();
    return 0;
}