#include<iostream>

using namespace std;


int main(){

	int nbNote;
	float note;
	int compteur = 1;
	float somme = 0;
	float moyenne;
	float max,min;
	int noteSupEgal10 = 0;
	int noteInf10 = 0;

	cout<< "Combien de notes voulez vous entrer: ";
	cin>>nbNote;

	while(compteur <= nbNote )
	{
		cout<< "Entrer une note"<<compteur<<": ";
		cin>>note;
			

		if(compteur == 1)
		{
			max = note;
			min = note;
		}
		else
		{
			if(note > max)
			{
				max = note;
			}
			if(note < min)
			{
				min = note;
			}
		}
		somme += note;

		if(note >= 10)
               		 noteSupEgal10++;
	        else
               		 noteInf10++;
                compteur++;
	}	

	moyenne = somme/nbNote;

	cout<< "\n======Resultat======\n";
	cout<< "La moyenne: "<<moyenne<<endl;
	cout<< "grande note: "<<max<<endl;
	cout<< "petite note: "<<min<<endl;
	cout<< "Superieur ou Egale à 10: "<<noteSupEgal10<<endl;
	cout<< "Inferieur à 10: "<<noteInf10<<endl;
	return 0;

}
