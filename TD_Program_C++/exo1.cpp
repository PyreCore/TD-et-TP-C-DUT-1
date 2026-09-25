#include<iostream>

using namespace std;

int main(void){

	string nom;
	int prix;
	int quantite;
	int montantBrut;
	float tauxDeremise;
	int montantDeremise;
	int montantFinal;


	cout<< "Entrez le nom du client: ";
	cin>>nom;

	cout<< "Entrez le prix unitaire: ";
	cin>>prix;

	cout<< "Entrez la quantité: ";
	cin>>quantite;


	montantBrut = prix * quantite;	
	if(montantBrut >= 100000)
		tauxDeremise = 15;
	else if(montantBrut >= 50000)
		tauxDeremise = 10;
	else if(montantBrut >= 25000)
		tauxDeremise = 5;
	else
		tauxDeremise = 0;

	montantDeremise = montantBrut*tauxDeremise/100;
	montantFinal = montantBrut - montantDeremise;

	cout<< "\n========Resultat=========\n";
	cout<< "nom du client: "<<nom<<endl;
	cout<< "montant Brut: "<<montantBrut<<"FCFA"<<endl;
	cout<< "Taux de remise: "<<tauxDeremise<<"%"<<endl;
	cout<< "montant remise: "<<montantDeremise<<"FCFA"<<endl;
	cout<< "montant final: "<<montantFinal<<"FCFA"<<endl;
	return 0;
	

}
