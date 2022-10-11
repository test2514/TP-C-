#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
//fonction 1.1 la somme de deux chiffres
int somme(int a, int b) 
    {
        return a + b;
    }
//fonction 1.2 deux entiers avec leur valeur inverse
void inverse(int& a, int& b)
    {
        int c = a;
        a = b;
        b = c;
    }
//fonction 1.3 Pointeur
void remplacement_troisPointeur(int* a, int* b, int* c) {
    *c = *a + *b;
}

//fonction 1.3 Référence
void remplacement_troisReference(int& a, int& b, int& c) {
    c = a + b;
}

//programme générant un tableau 1.4
void genTableau() 
{
    int i;
    int p;
    int tab[5];
    //srand (time(NULL));
    for (i=0;i<5;i++)
    {   //remplir le tableau de chiffres aléatoire de 1 à 10.
        tab[i]=rand() % 10 + 1;
    }
    for (i=0;i<5;i++)
    {   //affichage du tableau non triés
        std::cout << tab[i];
    }
    
    for (i=0;i<5;i++)
    {
        for(int p=0;p<5;p++)
        {   //par ordre croissant ; si tab[0] > tab[0], inverser
            if (tab[p]> tab[i])
            {
                inverse(tab[i],tab[p]);
            }
        }

    }
    cout << endl;
    
    for (i=0;i<5;i++)
    {   //affichage du tableau par ordre croissant
        std::cout << tab[i];
    } 
}

int main()
{
    int a =10;
    int b = 5;
    int c = 20;
    std::cout << somme(a,b) << std::endl;
    inverse(a,b);
    std::cout << a << " " << b << std::endl;
    remplacement_troisPointeur(&a,&b,&c);
    std::cout << a << " " << b <<" "<< c << std::endl;
    remplacement_troisReference(a,b,c);
    std::cout << a <<" " << b <<" " << c << std::endl;
    srand (time(NULL));
    genTableau();
    return 0;
}