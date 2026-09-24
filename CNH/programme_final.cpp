/*
Exercice 14
Auteur : Votre nom
Objectif : Gestion complète d'un participant
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    

    string prenom;
    int age;

    int categorie;
    string nomCategorie;

    bool carteFidelite;

    double tarifBase = 0;
    double tauxReduction = 0;
    double montantReduction = 0;
    double fraisInscription = 0;

    
    double note1, note2, note3;
    double moyenne;

    bool achatKit;
    int codeProduit;
    int quantite;
    string nomProduit;
    double prixUnitaire = 0;
    double montantKit = 0;

    double totalAPayer;
    string decision;


    const int TARIF_ELEVE = 2000;
    const int TARIF_ETUDIANT = 3500;
    const int TARIF_PROFESSIONNEL = 7500;
    const int TARIF_ENSEIGNANT = 4000;


    cout << "==========================================" << endl;
    cout << "      CENTRE NUMERIQUE HORIZON" << endl;
    cout << "==========================================" << endl;


    cout << "Prenom : ";
    cin >> prenom;

    cout << "Age : ";
    cin >> age;

    while(age < 12 || age > 100)
    {
        cout << "Age invalide. Recommencez : ";
        cin >> age;
    }


    cout << endl;
    cout << "1 - Eleve" << endl;
    cout << "2 - Etudiant" << endl;
    cout << "3 - Professionnel" << endl;
    cout << "4 - Enseignant" << endl;

    cout << "Votre categorie : ";
    cin >> categorie;

    while(categorie < 1 || categorie > 4)
    {
        cout << "Categorie invalide. Recommencez : ";
        cin >> categorie;
    }


    if(categorie == 1)
    {
        nomCategorie = "Eleve";
        tarifBase = TARIF_ELEVE;
    }
    else if(categorie == 2)
    {
        nomCategorie = "Etudiant";
        tarifBase = TARIF_ETUDIANT;
    }
    else if(categorie == 3)
    {
        nomCategorie = "Professionnel";
        tarifBase = TARIF_PROFESSIONNEL;
    }
    else
    {
        nomCategorie = "Enseignant";
        tarifBase = TARIF_ENSEIGNANT;
    }


    cout << "Possedez-vous une carte de fidelite ? (1 = Oui, 0 = Non) : ";
    cin >> carteFidelite;

    while(carteFidelite != 0 && carteFidelite != 1)
    {
        cout << "Reponse invalide. Recommencez : ";
        cin >> carteFidelite;
    }


    if(age < 18)
    {
        tauxReduction += 20;
    }

    if(carteFidelite)
    {
        tauxReduction += 10;
    }

    if(tauxReduction > 25)
    {
        tauxReduction = 25;
    }

    montantReduction = tarifBase * tauxReduction / 100;
    fraisInscription = tarifBase - montantReduction;


    for(int i = 1; i <= 3; i++)
    {
        if(i == 1)
        {
            cout << "Note de l'atelier C++ : ";
            cin >> note1;

            while(note1 < 0 || note1 > 20)
            {
                cout << "Note invalide. Recommencez : ";
                cin >> note1;
            }
        }
        else if(i == 2)
        {
            cout << "Note de l'atelier Linux : ";
            cin >> note2;

            while(note2 < 0 || note2 > 20)
            {
                cout << "Note invalide. Recommencez : ";
                cin >> note2;
            }
        }
        else
        {
            cout << "Note de l'atelier Reseaux : ";
            cin >> note3;

            while(note3 < 0 || note3 > 20)
            {
                cout << "Note invalide. Recommencez : ";
                cin >> note3;
            }
        }
    }

    moyenne = (note1 + note2 + note3) / 3.0;

    

    if(note1 < 5 || note2 < 5 || note3 < 5)
    {
        decision = "Rattrapage";
    }
    else if(note1 >= 15 && note2 >= 15 && note3 >= 15)
    {
        decision = "Excellent niveau (Mention Excellence)";
    }
    else if(moyenne < 8)
    {
        decision = "Formation insuffisante";
    }
    else if(moyenne < 10)
    {
        decision = "Rattrapage";
    }
    else if(moyenne < 12)
    {
        decision = "Niveau passable";
    }
    else if(moyenne < 14)
    {
        decision = "Niveau satisfaisant";
    }
    else if(moyenne < 16)
    {
        decision = "Bon niveau";
    }
    else
    {
        decision = "Excellent niveau";
    }



    cout << "\nSouhaitez-vous acheter un kit pédagogique ? (1 = Oui, 0 = Non) : ";
    cin >> achatKit;

    while(achatKit != 0 && achatKit != 1)
    {
        cout << "Réponse invalide. Recommencez : ";
        cin >> achatKit;
    }

    if(achatKit)
    {
        cout << "\n===== KITS DISPONIBLES =====" << endl;
        cout << "1 - Livret C++       (2500 F)" << endl;
        cout << "2 - Clé USB Linux    (6000 F)" << endl;
        cout << "3 - Kit Réseau RJ45  (12000 F)" << endl;

        cout << "Code du produit : ";
        cin >> codeProduit;

        while(codeProduit < 1 || codeProduit > 3)
        {
            cout << "Code invalide. Recommencez : ";
            cin >> codeProduit;
        }

        cout << "Quantité : ";
        cin >> quantite;

        while(quantite <= 0)
        {
            cout << "Quantité invalide. Recommencez : ";
            cin >> quantite;
        }

        if(codeProduit == 1)
        {
            nomProduit = "Livret C++";
            prixUnitaire = 2500;
        }
        else if(codeProduit == 2)
        {
            nomProduit = "Clé USB Linux";
            prixUnitaire = 6000;
        }
        else
        {
            nomProduit = "Kit Réseau RJ45";
            prixUnitaire = 12000;
        }

        montantKit = prixUnitaire * quantite;
    }
    else
    {
        nomProduit = "Aucun";
        montantKit = 0;
    }


    totalAPayer = fraisInscription + montantKit;

   

    cout << "\n==============================================" << endl;
    cout << "          CENTRE NUMERIQUE HORIZON" << endl;
    cout << "            RECU PARTICIPANT" << endl;
    cout << "==============================================" << endl;

    cout << "Participant          : " << prenom << endl;
    cout << "Age                  : " << age << " ans" << endl;
    cout << "Categorie            : " << nomCategorie << endl;
    cout << "Tarif de base        : " << tarifBase << " F" << endl;
    cout << "Reduction            : " << tauxReduction << " %" << endl;
    cout << "Frais d'inscription  : " << fraisInscription << " F" << endl;

    cout << "\n----- NOTES -----" << endl;
    cout << "C++                 : " << note1 << endl;
    cout << "Linux               : " << note2 << endl;
    cout << "Reseaux             : " << note3 << endl;
    cout << "Moyenne             : " << moyenne << endl;
    cout << "Decision            : " << decision << endl;

    cout << "\n----- KIT PEDAGOGIQUE -----" << endl;

    if(achatKit)
    {
        cout << "Produit             : " << nomProduit << endl;
        cout << "Quantite            : " << quantite << endl;
        cout << "Montant             : " << montantKit << " F" << endl;
    }
    else
    {
        cout << "Achat pédagogique   : Aucun" << endl;
    }

    cout << "\n----------------------------------------------" << endl;
    cout << "TOTAL A PAYER : " << totalAPayer << " F CFA" << endl;
    cout << "==============================================" << endl;

    return 0;
}


