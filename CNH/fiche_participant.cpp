/*
Exercice 2
Auteur : Ruben ETOUMBI
Objectif : Créer la fiche d'un participant.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string prenom;
    int age;
    string ville;
    string niveauEtude;
    char initialeNom;
    bool possedeOrdinateur;

    
    cout << boolalpha;

    
    cout << "Prénom : ";
    cin >> prenom;

    cout << "Âge : ";
    cin >> age;

    cout << "Ville : ";
    cin >> ville;

    cout << "Niveau d'étude : ";
    cin >> niveauEtude;

    cout << "Initiale du nom : ";
    cin >> initialeNom;

    cout << "Possédez-vous un ordinateur ? (1 = oui, 0 = non) : ";
    cin >> possedeOrdinateur;

    cout << "\n---------- FICHE DU PARTICIPANT ----------" << endl;
    cout << "Identité : " << prenom << " " << initialeNom << "." << endl;
    cout << "Âge : " << age << " ans" << endl;
    cout << "Ville : " << ville << endl;
    cout << "Niveau : " << niveauEtude << endl;
    cout << "Ordinateur personnel : " << possedeOrdinateur << endl;

    return 0;
}
