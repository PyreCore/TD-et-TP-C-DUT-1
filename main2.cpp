/*
Exercice 2
Auteur : Votre nom
Objectif : Créer la fiche d'un participant
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string prenom, ville, niveauEtude;
    int age;
    char initialeNom;
    bool possedeOrdinateur;

    cout << "Prenom : ";
    cin >> prenom;

    cout << "Age : ";
    cin >> age;

    cout << "Ville : ";
    cin >> ville;

    cout << "Niveau d'etude : ";
    cin >> niveauEtude;

    cout << "Initiale du nom : ";
    cin >> initialeNom;

    cout << "Possedez-vous un ordinateur ? (1=oui,0=non) : ";
    cin >> possedeOrdinateur;

    cout << boolalpha;

    cout << "\n----- FICHE DU PARTICIPANT -----\n";
    cout << "Identite : " << prenom << " " << initialeNom << ".\n";
    cout << "Age : " << age << " ans\n";
    cout << "Ville : " << ville << endl;
    cout << "Niveau : " << niveauEtude << endl;
    cout << "Ordinateur personnel : "
         << possedeOrdinateur << endl;

    return 0;
}
