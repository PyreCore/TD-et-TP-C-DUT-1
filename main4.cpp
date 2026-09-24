
#include <iostream>
using namespace std;

int main()
{
    // Déclaration des constantes
    const int TARIF_ELEVE = 2000;
    const int TARIF_ETUDIANT = 3500;
    const int TARIF_PROFESSIONNEL = 7500;
    const int TARIF_ENSEIGNANT = 4000;

    // Déclaration des variables
    int categorie;
    int tarif;

    // Affichage du menu
    cout << "1 - Élève" << endl;
    cout << "2 - Étudiant" << endl;
    cout << "3 - Professionnel" << endl;
    cout << "4 - Enseignant" << endl;
    cout <<endl;
    cout << "Choisissez votre catégorie : ";
    cin >> categorie;
    cout <<endl;
    // Traitement
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
        cout << "Erreur : catégorie inexistante." << endl;
    }

    return 0;
}

