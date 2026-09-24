/*
Exercice 6
Auteur : Ruben ETOUMBI
Objectif : Contrôler la saisie d'une catégorie avec une boucle while.
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
    int nombreErreurs = 0;

    
    cout << "Choisissez une catégorie entre 1 et 4 : ";
    cin >> categorie;
    
    
    
    while (categorie < 1 || categorie > 4)
    {
        cout << "Erreur : catégorie inexistante." << endl;
	cout<<endl;
        nombreErreurs++;

        cout << "Choisissez une catégorie entre 1 et 4 : ";
        cin >> categorie;
	
    }

    
    if (categorie == 1)
    {
        cout << "Catégorie acceptée : Élève" << endl;
        cout << "Tarif : " << TARIF_ELEVE << " F" << endl;
	
    }
    else if (categorie == 2)
    {
        cout << "Catégorie acceptée : Étudiant" << endl;
        cout << "Tarif : " << TARIF_ETUDIANT << " F" << endl;
	
    }
    else if (categorie == 3)
    {
        cout << "Catégorie acceptée : Professionnel" << endl;
        cout << "Tarif : " << TARIF_PROFESSIONNEL << " F" << endl;
	
    }
    else
    {
        cout << "Catégorie acceptée : Enseignant" << endl;
        cout << "Tarif : " << TARIF_ENSEIGNANT << " F" << endl;
	
	
    }

    cout << "Nombre de saisies incorrectes : "
         << nombreErreurs << endl;

    return 0;
}
