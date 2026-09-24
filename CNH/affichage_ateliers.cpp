/*
Exercice 8
Auteur : ETOUMBI KONDO RUBEN
Objectif : Afficher les ateliers et leurs horaires avec une boucle for.
*/

#include <iostream>
using namespace std;

int main()
{
    int numeroAtelier;
    int heureDebut, heureFin;

    cout << "===== LISTE DES ATELIERS =====" << endl;

    for (numeroAtelier = 1; numeroAtelier <= 3; numeroAtelier++)
    {
        cout << "Atelier numero " << numeroAtelier << endl;
    }

    cout << endl;
    cout << "===== HORAIRES DES ATELIERS =====" << endl;

    for (numeroAtelier = 1; numeroAtelier <= 3; numeroAtelier++)
    {
        heureDebut = 8 + (numeroAtelier - 1) * 2;
        heureFin = heureDebut + 2;

        cout << "Atelier " << numeroAtelier
             << " : de " << heureDebut
             << " h a " << heureFin << " h" << endl;
    }

    return 0;
}
