
#include <iostream>
using namespace std;
// Exercice 5
// Emmanuel
// Réduction selon le profil

int main()
{
    int age;
    double tarifBase;
    bool carteFidelite;

    double tauxReduction = 0;
    double montantReduction;
    double montantFinal;
    double tauxAvantLimitation;

    
    cout << "Âge : ";
    cin >> age;

    cout << "Tarif de base : ";
    cin >> tarifBase;

    cout << "Carte de fidélité ? (1 = oui, 0 = non) : ";
    cin >> carteFidelite;

    
    if (age < 18)
    {
        tauxReduction += 20;
    }

    if (carteFidelite)
    {
        tauxReduction += 10;
    }

    // Sauvgarde du taux avant limitation
    tauxAvantLimitation = tauxReduction;

    // Limitation à 25 %
    if (tauxReduction > 25)
    {
        tauxReduction = 25;
    }

    // Calculs
    montantReduction = tarifBase * tauxReduction / 100;
    montantFinal = tarifBase - montantReduction;

    // Affichage
    cout << "\nRéduction calculée avant limitation : "
         << tauxAvantLimitation << " %" << endl;

    cout << "Réduction réellement appliquée : "
         << tauxReduction << " %" << endl;

    cout << "Montant de la réduction : "
         << montantReduction << " F" << endl;

    cout << "Montant final : "
         << montantFinal << " F" << endl;

    return 0;
}

