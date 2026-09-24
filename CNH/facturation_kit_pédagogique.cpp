/*
Exercice 11
Auteur : ETOUMBI KONDO RUBEN
Objectif : Facturation d'un kit pédagogique.
*/

#include <iostream>
using namespace std;

int main()
{
    int codeProduit;
    int quantite;
    int livraison;

    int prixUnitaire = 0;
    int fraisLivraison = 0;
    double tauxReduction = 0;

    double montantBrut;
    double reduction;
    double montantApresReduction;
    double montantFinal;

    
    cout << "Code du produit : ";
    cin >> codeProduit;

    while (codeProduit < 1 || codeProduit > 3)
    {
        cout << "Code invalide. Recommencez : ";
        cin >> codeProduit;
    }

    
    cout << "Quantite : ";
    cin >> quantite;

    while (quantite <= 0)
    {
        cout << "Quantite invalide. Recommencez : ";
        cin >> quantite;
    }

    
    cout << "Livraison ? (1 = oui, 0 = non) : ";
    cin >> livraison;
    cout<<endl;

    while (livraison != 0 && livraison != 1)
    {
        cout << "Choix invalide. Recommencez : ";
        cin >> livraison;
    }

    
    if (codeProduit == 1)
    {
        cout << "Produit : Livret C++" << endl;
        prixUnitaire = 2500;
    }
    else if (codeProduit == 2)
    {
        cout << "Produit : Cle USB Linux" << endl;
        prixUnitaire = 6000;
    }
    else
    {
        cout << "Produit : Kit reseau RJ45" << endl;
        prixUnitaire = 12000;
    }

    
    if (quantite < 3)
    {
        tauxReduction = 0;
    }
    else if (quantite <= 5)
    {
        tauxReduction = 5;
    }
    else if (quantite <= 9)
    {
        tauxReduction = 10;
    }
    else
    {
        tauxReduction = 15;
    }

    
    if (livraison == 1)
    {
        fraisLivraison = 2000;
    }

    
    montantBrut = prixUnitaire * quantite;
    reduction = montantBrut * tauxReduction / 100;
    montantApresReduction = montantBrut - reduction;
    montantFinal = montantApresReduction + fraisLivraison;

    
    cout << "Prix unitaire : " << prixUnitaire << " F" << endl;
    cout << "Quantite : " << quantite << endl;
    cout << "Montant brut : " << montantBrut << " F" << endl;
    cout << "Reduction : " << tauxReduction << " %" << endl;
    cout << "Montant de la reduction : " << reduction << " F" << endl;
    cout << "Livraison : " << fraisLivraison << " F" << endl;
    cout << "Total a payer : " << montantFinal << " F" << endl;

    return 0;
}
