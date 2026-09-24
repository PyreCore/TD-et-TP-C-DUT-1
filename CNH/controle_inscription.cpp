/*
Exercice 7
Auteur : Ruben ETOUMBI
Objectif : Contrôler complètement une inscription.
*/

#include <iostream>

using namespace std;

int main()
{
    int age;
    int categorie;
    int nombreAteliers;
    int nombreErreurs = 0;

    
    cout << "Âge du participant : ";
    cin >> age;
    

    while (age < 12 || age > 100)
    {
        cout << "Âge invalide." << endl;
        nombreErreurs++;
	cout<<endl;

        cout << "Âge du participant : ";
        cin >> age;
	
    
    
    }

    
    cout << "Catégorie : ";
    cin >> categorie;

    while (categorie < 1 || categorie > 4)
    {
        cout << "Catégorie invalide." << endl;
        nombreErreurs++;

        cout << "Catégorie : ";
        cin >> categorie;
    }

    
    cout << "Nombre d'ateliers : ";
    cin >> nombreAteliers;

    while (nombreAteliers < 1 || nombreAteliers > 3)
    {
        if (nombreAteliers < 1)
        {
            cout << "Le participant doit choisir au moins un atelier." << endl;
        }
        else
        {
            cout << "Le centre propose au maximum trois ateliers." << endl;
        }

        nombreErreurs++;

        cout << "Nombre d'ateliers : ";
        cin >> nombreAteliers;
    }

    cout << endl;
    cout << "Inscription correctement enregistrée." << endl;
    cout << "Nombre total d'erreurs de saisie : "
         << nombreErreurs << endl;

    return 0;
}
