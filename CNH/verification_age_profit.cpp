/*
Exercice 3
Auteur : Ruben ETOUMBI
Objectif : Vérifier l'admissibilité d'un participant selon son âge.
*/

#include <iostream>

using namespace std;

int main()
{
    int age;
    bool accompagnateur;

    cout << "Entrez votre âge : ";
    cin >> age;

    if (age < 12)
    {
        cout << "Inscription refusée." << endl;
    }
    else if (age >= 12 && age <= 15)
    {
        cout << "Inscription conditionnelle : accompagnateur obligatoire." << endl;

        cout << "Un accompagnateur est-il présent ? (1 = oui, 0 = non) : ";
        cin >> accompagnateur;

        if (accompagnateur)
        {
            cout << "Inscription acceptée." << endl;
        }
        else
        {
            cout << "Inscription finalement refusée." << endl;
        }
    }
    else if (age >= 16 && age <= 60)
    {
        cout << "Inscription normale." << endl;
    }
    else
    {
        cout << "Inscription autorisée : accès prioritaire." << endl;
    }

    return 0;
}
