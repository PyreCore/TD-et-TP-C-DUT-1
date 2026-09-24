#include <iostream>
using namespace std;

int main()
{
    int age, categorie, ateliers;
    int erreurs = 0;

    cout << "Age : ";
    cin >> age;

    while(age < 12 || age > 100)
    {
        erreurs++;
        cout << "Age invalide.\n";
        cin >> age;
    }

    cout << "Categorie : ";
    cin >> categorie;

    while(categorie < 1 || categorie > 4)
    {
        erreurs++;
        cout << "Categorie invalide.\n";
        cin >> categorie;
    }

    cout << "Nombre d'ateliers : ";
    cin >> ateliers;

    while(ateliers < 1 || ateliers > 3)
    {
        erreurs++;

        if(ateliers < 1)
            cout << "Au moins un atelier.\n";
        else
            cout << "Maximum trois ateliers.\n";

        cin >> ateliers;
    }

    cout << "\nInscription correctement enregistree.\n";
    cout << "Nombre total d'erreurs : "<< erreurs<<endl;

    return 0;
}
