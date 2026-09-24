/*
Exercice 9
Auteur : ETOUMBI KONDO RUBEN
Objectif : Saisir les notes des trois ateliers et calculer
la somme, la moyenne, la meilleure et la plus faible note.
*/

#include <iostream>
using namespace std;

int main()
{
    double note1 = 0.0;
    double note2 = 0.0;
    double note3 = 0.0;

    
    cout << "Note de l'atelier 1 : ";
    cin >> note1;

    while (note1 < 0 || note1 > 20)
    {
        cout << "Erreur : la note doit être comprise entre 0 et 20." << endl;
        cout << "Note de l'atelier 1 : ";
        cin >> note1;
    }

    
    cout << "Note de l'atelier 2 : ";
    cin >> note2;

    while (note2 < 0 || note2 > 20)
    {
        cout << "Erreur : la note doit être comprise entre 0 et 20." << endl;
        cout << "Note de l'atelier 2 : ";
        cin >> note2;
    }

    
    cout << "Note de l'atelier 3 : ";
    cin >> note3;

    while (note3 < 0 || note3 > 20)
    {
        cout << "Erreur : la note doit être comprise entre 0 et 20." << endl;
        cout << "Note de l'atelier 3 : ";
        cin >> note3;
    }

    
    double somme = note1 + note2 + note3;
    double moyenne = somme / 3;

    
    double meilleureNote = note1;

    if (note2 > meilleureNote)
    {
        meilleureNote = note2;
    }

    if (note3 > meilleureNote)
    {
        meilleureNote = note3;
    }

    
    double plusFaibleNote = note1;

    if (note2 < plusFaibleNote)
    {
        plusFaibleNote = note2;
    }

    if (note3 < plusFaibleNote)
    {
        plusFaibleNote = note3;
    }

    
    cout << endl;
    cout << "===== RESULTATS =====" << endl;
    cout << "Somme des notes : " << somme << endl;
    cout << "Moyenne : " << moyenne << endl;
    cout << "Meilleure note : " << meilleureNote << endl;
    cout << "Note la plus faible : " << plusFaibleNote << endl;

    return 0;
}
