/*
Exercice 4
Auteur : Ruben ETOUMBI
Objectif : Calculer le tarif de base selon la catégorie.
*/

#include <iostream>

using namespace std;

int main()
{
    
    const int TARIF_ELEVE = 2000;
    const int TARIF_ETUDIANT = 3500;
    const int TARIF_PROFESSIONNEL = 7500;
    const int TARIF_ENSEIGNANT = 4000;

    
    int categorie;
    int tarif;

    
    cout << "===== Choix de la catégorie =====" << endl;
    cout << "1 - Élève" << endl;
    cout << "2 - Étudiant" << endl;
    cout << "3 - Professionnel" << endl;
    cout << "4 - Enseignant" << endl;

    cout << "Choisissez votre catégorie : ";
    cin >> categorie;

    
    if (categorie == 1)
    {
        tarif = TARIF_ELEVE;
        cout << "Catégorie : Élève" << endl;
        cout << "Tarif de base : " << tarif << " F CFA" << endl;
    }
    else if (categorie == 2)
    {
        tarif = TARIF_ETUDIANT;
        cout << "Catégorie : Étudiant" << endl;
        cout << "Tarif de base : " << tarif << " F CFA" << endl;
    }
    else if (categorie == 3)
    {
        tarif = TARIF_PROFESSIONNEL;
        cout << "Catégorie : Professionnel" << endl;
        cout << "Tarif de base : " << tarif << " F CFA" << endl;
    }
    else if (categorie == 4)
    {
        tarif = TARIF_ENSEIGNANT;
        cout << "Catégorie : Enseignant" << endl;
        cout << "Tarif de base : " << tarif << " F CFA" << endl;
    }
    else
    {
        cout << "Erreur : code de catégorie invalide." << endl;
    }

    return 0;
}
