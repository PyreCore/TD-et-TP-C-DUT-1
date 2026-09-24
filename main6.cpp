

#include <iostream>
using namespace std;

//Exercice 6
//Giftcool
//Controle du code de catégorie avec while

int main()
{
    
    const int TARIF_ELEVE = 2000;
    const int TARIF_ETUDIANT = 3500;
    const int TARIF_PROFESSIONNEL = 7500;
    const int TARIF_ENSEIGNANT = 4000;

    
    int categorie;
    int tarif;
    int nbErreurs = 0;

    
    cout << "Choisissez une catégorie entre 1 et 4 : ";
    cin >> categorie;

    
    while (categorie < 1 || categorie > 4)
    {
        cout << "Erreur : catégorie inexistante." << endl;
        nbErreurs++;
	cout <<endl;
        cout << "Choisissez une catégorie entre 1 et 4 : ";
        cin >> categorie;
    }

    
    if (categorie == 1)
    {
        cout << "Catégorie acceptée : Élève" << endl;
        tarif = TARIF_ELEVE;
    }
    else if (categorie == 2)
    {
        cout << "Catégorie acceptée : Étudiant" << endl;
        tarif = TARIF_ETUDIANT;
    }
    else if (categorie == 3)
    {
        cout << "Catégorie acceptée : Professionnel" << endl;
        tarif = TARIF_PROFESSIONNEL;
    }
    else
    {
        cout << "Catégorie acceptée : Enseignant" << endl;
        tarif = TARIF_ENSEIGNANT;
    }

    cout << "Tarif : " << tarif << " F" << endl;
    cout << "Nombre de saisies incorrectes : " << nbErreurs << endl;

    return 0;
}

