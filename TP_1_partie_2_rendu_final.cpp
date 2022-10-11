#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int score_j1;
int score_j2;
int joueur_avantage;
int joueur_avantage_2;

void Jeu_De_Tennis(int score_j1, int score_j2)
{
    std :: cout << score_j1 << endl;
    std :: cout << score_j2 << endl; 
  if (score_j1 > score_j2) 
  {
    std :: cout << "Le joueur un à gagné avec 40 points" << endl;
  }
  else if (score_j1 < score_j2) 
  {
    std :: cout <<"le joueur deux à gagné avec 40 points." << endl;
  }
  else if (score_j1 == score_j2) 
  {
    std :: cout <<"égalité entre les deux joueurs" << endl;

    cout << "Qui à l'avantage ? j1 ou j2 ?" << endl;
    cin >> joueur_avantage;
    if (joueur_avantage==1) 
    {
        score_j1+=1;
        cout <<"le joueur un à l'avantage. Il a 5 points" << endl;
    }
    else if (joueur_avantage==2)
    {
        score_j2+=1;
        cout <<"le joueur deux à l'avantage. Il a 5 points" << endl;
    }

    cout << "Qui à l'avantage ? j1 ou j2 ?" << endl;
    cin >> joueur_avantage_2;
    if (joueur_avantage_2==1) 
    {
        score_j1+=1;
    }

    else if (joueur_avantage_2==2)
    {
        score_j2+=1;
    }


    if (score_j1 == 6)
    {
    cout << "Joueur 1 à gagné" << endl;
    }
    else if (score_j2 == 6)
    {
    cout << "Joueur 2 à gagné" << endl;
    }
    else if ((score_j1 == 5) and (score_j2 == 5)) 
    {
        cout << "Vous êtes à égalité, recommencer les échanges!!" << endl;
    }
}
}




int main()
{
    Jeu_De_Tennis(4,0);
    Jeu_De_Tennis(0,4);
    Jeu_De_Tennis(4,4);

    return 0;
}