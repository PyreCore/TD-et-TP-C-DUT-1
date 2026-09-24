/*
Exercice 10
Auteur : ETOUMBI KONDO RUBEN
Objectif : Déterminer la décision finale du participant.
*/

#include <iostream>
using namespace std;

int main()
{
    double note1, note2, note3;
    double moyenne;

    cout << "Note 1 : ";
    cin >> note1;

    cout << "Note 2 : ";
    cin >> note2;

    cout << "Note 3 : ";
    cin >> note3;
    cout<<endl;

    moyenne = (note1 + note2 + note3) / 3;

    cout << "Moyenne : " << moyenne << endl;

    if (note1 < 5 || note2 < 5 || note3 < 5)
    {
        cout << "Decision : Rattrapage" << endl;
        cout << "Motif : une note est inferieure a 5." << endl;
    }
    else
    {
        if (moyenne < 8)
        {
            cout << "Decision : Formation insuffisante" << endl;
        }
        else if (moyenne < 10)
        {
            cout << "Decision : Rattrapage" << endl;
        }
        else if (moyenne < 12)
        {
            cout << "Decision : Niveau passable" << endl;
        }
        else if (moyenne < 14)
        {
            cout << "Decision : Niveau satisfaisant" << endl;
        }
        else if (moyenne < 16)
        {
            cout << "Decision : Bon niveau" << endl;
        }
        else
        {
            cout << "Decision : Excellent niveau" << endl;
        }

        if (note1 >= 15 && note2 >= 15 && note3 >= 15)
        {
            cout << "Mention speciale : Excellence" << endl;
        }
    }

    return 0;
}
