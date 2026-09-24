/*
Exercice 13
Auteur : Votre nom
Objectif : Réaliser le bilan d'une série de participants.
*/

#include <iostream>
using namespace std;

int main()
{
    
    int nombreParticipants;
    int numero;
    int age;
    double moyenne;

    int admis = 0;
    int rattrapage = 0;
    int insuffisant = 0;
    int excellent = 0;

    double sommeMoyennes = 0;
    double moyenneGenerale;
    double meilleureMoyenne;
    double plusFaibleMoyenne;
    double tauxReussite;

    
    cout << "Nombre de participants : ";
    cin >> nombreParticipants;

    while (nombreParticipants < 1 || nombreParticipants > 30)
    {
        cout << "Erreur ! Le nombre doit être compris entre 1 et 30 : ";
        cin >> nombreParticipants;
    }

    
    for (int i = 1; i <= nombreParticipants; i++)
    {
        cout << "\n========== Participant " << i << " ==========" << endl;

        cout << "Numéro : ";
        cin >> numero;

        cout << "Moyenne : ";
        cin >> moyenne;

        while (moyenne < 0 || moyenne > 20)
        {
            cout << "Erreur ! La moyenne doit être comprise entre 0 et 20 : ";
            cin >> moyenne;
        }

        cout << "Âge : ";
        cin >> age;

        
        sommeMoyennes += moyenne;

        
        if (moyenne < 8)
        {
            insuffisant++;
        }
        else if (moyenne < 10)
        {
            rattrapage++;
        }
        else
        {
            admis++;
        }

        
        if (moyenne >= 16)
        {
            excellent++;
        }

        
        if (i == 1)
        {
            meilleureMoyenne = moyenne;
            plusFaibleMoyenne = moyenne;
        }
        else
        {
            if (moyenne > meilleureMoyenne)
            {
                meilleureMoyenne = moyenne;
            }

            if (moyenne < plusFaibleMoyenne)
            {
                plusFaibleMoyenne = moyenne;
            }
        }
    }

    
    moyenneGenerale = sommeMoyennes / nombreParticipants;
    tauxReussite = admis * 100.0 / nombreParticipants;

    
    cout << "\n==========================================" << endl;
    cout << "      BILAN DE LA JOURNEE" << endl;
    cout << "==========================================" << endl;

    cout << "Nombre de participants          : " << nombreParticipants << endl;
    cout << "Nombre d'admis                  : " << admis << endl;
    cout << "Nombre de rattrapages           : " << rattrapage << endl;
    cout << "Nombre d'insuffisants           : " << insuffisant << endl;
    cout << "Participants d'excellent niveau : " << excellent << endl;
    cout << "Moyenne générale                : " << moyenneGenerale << endl;
    cout << "Meilleure moyenne               : " << meilleureMoyenne << endl;
    cout << "Plus faible moyenne             : " << plusFaibleMoyenne << endl;
    cout << "Taux de réussite                : " << tauxReussite << " %" << endl;

    return 0;
}
