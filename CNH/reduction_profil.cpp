/*
Exercice 5
Auteur : Ruben ETOUMBI
Objectif : Calculer la réduction appliquée au tarif d'inscription.
*/

#include <iostream>

using namespace std;

int main()
{
    int age;
    double tarifBase;
    bool carteFidelite;

    double tauxReduction = 0;
    double montantReduction;
    double montantFinal;

    
    cout << "Âge : ";
    cin >> age;

    cout << "Tarif de base : ";
    cin >> tarifBase;

    cout << "Carte de fidélité ? (1 = oui, 0 = non) : ";
    cin >> carteFidelite;
    cout<<endl;

    
    if (age < 18)
    {
        tauxReduction += 20;
    }

    if (carteFidelite)
    {
        tauxReduction += 10;
    }

    
    cout << "Réduction calculée avant limitation : "
         << tauxReduction << " %" << endl;

    
    if (tauxReduction > 25)
    {
        tauxReduction = 25;
    }

    
    montantReduction = tarifBase * tauxReduction / 100;
    montantFinal = tarifBase - montantReduction;

    
    cout << "Réduction réellement appliquée : "
         << tauxReduction << " %" << endl;

    cout << "Montant de la réduction : "
         << montantReduction << " F" << endl;

    cout << "Montant final : "
         << montantFinal << " F" << endl;

    return 0;
}
