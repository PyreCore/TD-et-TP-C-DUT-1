/*
Exercice 12
Auteur : ETOUMBI KONDO RUBEN
Objectif : Simulation d'une caisse journalière.
*/

#include <iostream>
using namespace std;

int main()
{
    const int TARIF_ELEVE = 2000;
    const int TARIF_ETUDIANT = 3500;
    const int TARIF_PROFESSIONNEL = 7500;
    const int TARIF_ENSEIGNANT = 4000;

    int nombreParticipants;
    int numeroParticipant;

    int categorie;
    int age;
    bool carteFidelite;

    double tarifBase;
    double tauxReduction;
    double montantReduction;
    double montantFinal;

    double totalEncaisse = 0;
    double montantMaximum = 0;
    double montantMinimum = 0;

    int nombreMineurs = 0;
    int nombreCartes = 0;

    cout << "Nombre de participants : ";
    cin >> nombreParticipants;

    while (nombreParticipants < 1 || nombreParticipants > 20)
    {
        cout << "Valeur invalide. Recommencez : ";
        cin >> nombreParticipants;
    }

    for (numeroParticipant = 1; numeroParticipant <= nombreParticipants; numeroParticipant++)
    {
        cout << endl;
        cout << "---------- PARTICIPANT " << numeroParticipant << " ----------" << endl;

        cout << "Categorie : ";
        cin >> categorie;

        while (categorie < 1 || categorie > 4)
        {
            cout << "Categorie invalide. Recommencez : ";
            cin >> categorie;
        }

        cout << "Age : ";
        cin >> age;

        while (age < 12 || age > 100)
        {
            cout << "Age invalide. Recommencez : ";
            cin >> age;
        }

        cout << "Carte de fidelite (1 = oui, 0 = non) : ";
        cin >> carteFidelite;

        while (carteFidelite != 0 && carteFidelite != 1)
        {
            cout << "Valeur invalide. Recommencez : ";
            cin >> carteFidelite;
        }

        if (categorie == 1)
            tarifBase = TARIF_ELEVE;
        else if (categorie == 2)
            tarifBase = TARIF_ETUDIANT;
        else if (categorie == 3)
            tarifBase = TARIF_PROFESSIONNEL;
        else
            tarifBase = TARIF_ENSEIGNANT;

        tauxReduction = 0;

        if (age < 18)
            tauxReduction += 20;

        if (carteFidelite)
            tauxReduction += 10;

        if (tauxReduction > 25)
            tauxReduction = 25;

        montantReduction = tarifBase * tauxReduction / 100;
        montantFinal = tarifBase - montantReduction;

        cout << "Montant a payer : " << montantFinal << " F" << endl;

        totalEncaisse += montantFinal;

        if (age < 18)
            nombreMineurs++;

        if (carteFidelite)
            nombreCartes++;

        if (numeroParticipant == 1)
        {
            montantMinimum = montantFinal;
            montantMaximum = montantFinal;
        }

        if (montantFinal < montantMinimum)
            montantMinimum = montantFinal;

        if (montantFinal > montantMaximum)
            montantMaximum = montantFinal;
    }

    cout << endl;
    cout << "========== BILAN ==========" << endl;
    cout << "Nombre de participants : " << nombreParticipants << endl;
    cout << "Total encaisse : " << totalEncaisse << " F" << endl;
    cout << "Montant moyen : " << totalEncaisse / nombreParticipants << " F" << endl;
    cout << "Nombre de participants mineurs : " << nombreMineurs << endl;
    cout << "Nombre de cartes de fidelite utilisees : " << nombreCartes << endl;
    cout << "Montant le plus eleve : " << montantMaximum << " F" << endl;
    cout << "Montant le plus faible : " << montantMinimum << " F" << endl;

    return 0;
}
